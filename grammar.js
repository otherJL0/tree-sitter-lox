module.exports = grammar({
  name: "lox",

  extras: ($) => [
    $.comment,
    /\s/,
  ],

  word: ($) => $.identifier,
  rules: {
    source_file: ($) => repeat($._statement),
    comment: (_$) => /\/\/.*/,

    _statement: ($) =>
      seq(
        choice(
          $._assignment_statement,
          $._expression_statement,
          $.print_statement,
        ),
        ";",
      ),
    print_statement: ($) => seq("print", $._expression),

    _assignment_statement: ($) =>
      seq(
        "var",
        $.identifier,
        "=",
        $._expression,
      ),
    _expression_statement: ($) => seq($._expression),

    _expression: ($) =>
      choice(
        $._literal,
        $.identifier,
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
