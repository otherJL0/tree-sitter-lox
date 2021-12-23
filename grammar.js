module.exports = grammar({
  name: "lox",

  extras: ($) => [
    $.comment,
    /\s/,
  ],

  // word: ($) => $.identifier,
  rules: {
    comment: (_$) => /\/\/.*/,
    program: ($) => repeat($._declaration),

    // Declarations
    _declaration: ($) =>
      choice(
        $.class_declaration,
        $.function_declaration,
        $.var_declaration,
        $._statement,
      ),

    class_declaration: ($) =>
      seq(
        "class",
        $.identifier,
        optional(seq("<", $.identifier)),
        "{",
        repeat($.function),
        "}",
      ),

    function_declaration: ($) => seq("fun", $.function),

    var_declaration: ($) =>
      seq("var", $.identifier, optional(seq("=", $.expression)), ";"),

    // Statements
    _statement: ($) =>
      choice(
        $.expression_statement,
        $.for_statement,
        $.if_statement,
        $.print_statement,
        $.return_statement,
        $.while_statement,
        $.block,
      ),

    expression_statement: ($) => seq($.expression, ";"),
    for_statement: ($) =>
      seq(
        "for",
        "(",
        choice($.var_declaration, $.expression_statement, ":"),
        optional($.expression),
        ";",
        optional($.expression),
        ")",
        $._statement,
      ),

    if_statement: ($) =>
      seq(
        "if",
        "(",
        $.expression,
        ")",
        $._statement,
        optional(
          seq("else", $._statement),
        ),
      ),

    print_statement: ($) => seq("print", $.expression, ";"),

    return_statement: ($) => seq("return", optional($.expression), ";"),

    while_statement: ($) => seq("while", "(", $.expression, ")", $._statement),

    block: ($) => seq("{", repeat($._declaration), "}"),

    // Expressions
    expression: ($) => $.assignment,

    assignment: ($) =>
      choice(
        seq(
          optional(seq($.call, ".")),
          $.identifier,
          "=",
          $.assignment,
        ),
        $.logic_or,
      ),

    logic_or: ($) => seq($.logic_and, repeat(seq("or", $.logic_and))),
    logic_and: ($) => seq($.equality, repeat(seq("and", $.equality))),
    equality: ($) =>
      seq(
        $.comparison,
        repeat(
          seq(
            choice("!=", "=="),
            $.comparison,
          ),
        ),
      ),
    comparison: ($) =>
      seq($.term, repeat(seq(choice(">", "<", ">=", "<="), $.factor))),

    term: ($) => seq($.factor, repeat(seq(choice("-", "+"), $.factor))),
    factor: ($) => seq($.unary, repeat(seq(choice("/", "*"), $.unary))),
    unary: ($) =>
      seq(
        choice("!", "-"),
        choice($.unary, $.call),
      ),
    call: ($) =>
      seq(
        $.primary,
        repeat(
          choice(seq("(", optional($.arguments), ")"), seq(".", $.identifier)),
        ),
      ),
    primary: ($) =>
      choice(
        "true",
        "false",
        "nil",
        "this",
        $.number,
        $.string,
        $.identifier,
        seq("(", $.expression, ")"),
        seq("super", ".", $.identifier),
      ),

    // Utility rules
    function: ($) => seq($.identifier, "(", optional($.parameters), ")"),
    parameters: ($) => seq($.identifier, repeat(seq(",", $.identifier))),
    arguments: ($) => seq($.identifier, repeat(seq(",", $.expression))),

    number: ($) => seq(repeat1($.digit), optional(seq(".", repeat1($.digit)))),
    string: (_$) => /\"[^\"]*\"/,
    identifier: ($) => seq($.alpha, repeat(choice($.alpha, $.digit))),
    alpha: (_$) => /[a-zA-Z_]/,
    digit: (_$) => /\d/,
  },
});
