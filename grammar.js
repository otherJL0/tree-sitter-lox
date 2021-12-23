module.exports = grammar({
  name: "lox",

  extras: ($) => [
    $.comment,
    /\s/,
  ],

  word: ($) => $.identifier,
  rules: {},
});
