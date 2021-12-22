const PREC = {
  ASSIGN: 1, // =  += -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  >>>=
  SWITCH_EXP: 1, // always prefer to parse switch as expression over statement
  DECL: 2,
  ELEMENT_VAL: 2,
  TERNARY: 3, // ?:
  OR: 4, // ||
  AND: 5, // &&
  BIT_OR: 6, // |
  BIT_XOR: 7, // ^
  BIT_AND: 8, // &
  EQUALITY: 9, // ==  !=
  GENERIC: 10,
  REL: 10, // <  <=  >  >=  instanceof
  SHIFT: 11, // <<  >>  >>>
  ADD: 12, // +  -
  MULT: 13, // *  /  %
  CAST: 14, // (Type)
  OBJ_INST: 14, // new
  UNARY: 15, // ++a  --a  a++  a--  +  -  !  ~
  ARRAY: 16, // [Index]
  OBJ_ACCESS: 16, // .
  PARENS: 16, // (Expression)
};

module.exports = grammar({
  name: "lox",

  extras: ($) => [
    $.comment,
    /\s/,
  ],

  word: ($) => $.identifier,
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $._statement,
          $.body,
        ),
      ),
    comment: (_$) => /\/\/.*/,

    _statement: ($) =>
      seq(
        choice(
          $._assignment_statement,
          $._expression_statement,
          $.if_statement,
          $.while_statement,
          $.print_statement,
        ),
        ";",
      ),

    body: ($) => seq("{", repeat($._statement), "}"),
    print_statement: ($) => seq("print", $._expression),

    _assignment_statement: ($) =>
      seq(
        optional("var"),
        $.identifier,
        "=",
        $._expression,
      ),

    while_statement: ($) =>
      seq(
        "while",
        field("condition", $._parenethesized_expression),
        $.body,
      ),

    if_statement: ($) =>
      seq(
        "if",
        field("condition", $._parenethesized_expression),
        $.body,
        optional(seq("else", $.body)),
      ),
    _parenethesized_expression: ($) => seq("(", repeat($._expression), ")"),
    _expression_statement: ($) => seq($._expression),

    _expression: ($) =>
      choice(
        $._literal,
        $.identifier,
        $.binary_expression,
      ),

    binary_expression: ($) =>
      choice(
        ...[
          [">", PREC.REL],
          ["<", PREC.REL],
          [">=", PREC.REL],
          ["<=", PREC.REL],
          ["==", PREC.EQUALITY],
          ["!=", PREC.EQUALITY],
          ["and", PREC.AND],
          ["or", PREC.OR],
          ["+", PREC.ADD],
          ["-", PREC.ADD],
          ["*", PREC.MULT],
          ["/", PREC.MULT],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression),
            ),
          )
        ),
      ),
    _literal: ($) =>
      choice(
        $.number,
        $.boolean,
        $.string,
        "nil",
      ),

    identifier: (_$) => /[a-z]+/,
    number: (_$) => /\d+|\d+\.?\d+/,
    boolean: (_$) => choice("true", "false"),
    string: (_$) => /\"[^\"]*\"/,
  },
});
