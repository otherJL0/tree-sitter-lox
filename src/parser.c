#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_print = 6,
  anon_sym_var = 7,
  anon_sym_EQ = 8,
  anon_sym_for = 9,
  anon_sym_while = 10,
  anon_sym_if = 11,
  anon_sym_else = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_GT = 15,
  anon_sym_LT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_and = 21,
  anon_sym_or = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_nil = 27,
  sym_number = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  sym_string = 31,
  sym_source_file = 32,
  sym__statement = 33,
  sym_body = 34,
  sym_print_statement = 35,
  sym__assignment_statement = 36,
  sym_while_statement = 37,
  sym_if_statement = 38,
  sym__parenethesized_expression = 39,
  sym__expression_statement = 40,
  sym__expression = 41,
  sym_binary_expression = 42,
  sym__literal = 43,
  sym_boolean = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_body_repeat1 = 46,
  aux_sym__parenethesized_expression_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_print] = "print",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_nil] = "nil",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_body] = "body",
  [sym_print_statement] = "print_statement",
  [sym__assignment_statement] = "_assignment_statement",
  [sym_while_statement] = "while_statement",
  [sym_if_statement] = "if_statement",
  [sym__parenethesized_expression] = "_parenethesized_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym__parenethesized_expression_repeat1] = "_parenethesized_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_nil] = anon_sym_nil,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_body] = sym_body,
  [sym_print_statement] = sym_print_statement,
  [sym__assignment_statement] = sym__assignment_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__parenethesized_expression] = sym__parenethesized_expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym__parenethesized_expression_repeat1] = aux_sym__parenethesized_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__parenethesized_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parenethesized_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
  [1] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__statement] = STATE(2),
    [sym_body] = STATE(2),
    [sym_print_statement] = STATE(43),
    [sym__assignment_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym_if_statement] = STATE(43),
    [sym__expression_statement] = STATE(43),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_string] = ACTIONS(21),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_body] = STATE(3),
    [sym_print_statement] = STATE(43),
    [sym__assignment_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym_if_statement] = STATE(43),
    [sym__expression_statement] = STATE(43),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_string] = ACTIONS(21),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_body] = STATE(3),
    [sym_print_statement] = STATE(43),
    [sym__assignment_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym_if_statement] = STATE(43),
    [sym__expression_statement] = STATE(43),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_print] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(38),
    [anon_sym_while] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(44),
    [anon_sym_nil] = ACTIONS(47),
    [sym_number] = ACTIONS(50),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_string] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_print,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_nil,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym__statement,
      aux_sym_body_repeat1,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
    STATE(43), 5,
      sym_print_statement,
      sym__assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym__expression_statement,
  [50] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_print,
    ACTIONS(66), 1,
      anon_sym_var,
    ACTIONS(69), 1,
      anon_sym_while,
    ACTIONS(72), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(78), 2,
      sym_number,
      sym_string,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym__statement,
      aux_sym_body_repeat1,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
    STATE(43), 5,
      sym_print_statement,
      sym__assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym__expression_statement,
  [100] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_print,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym__statement,
      aux_sym_body_repeat1,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
    STATE(43), 5,
      sym_print_statement,
      sym__assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym__expression_statement,
  [150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(86), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      sym_string,
  [182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      sym_number,
      sym_string,
  [210] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_and,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(88), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
    ACTIONS(86), 5,
      anon_sym_or,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [252] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(88), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
    ACTIONS(86), 6,
      anon_sym_and,
      anon_sym_or,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(86), 6,
      anon_sym_and,
      anon_sym_or,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      sym_string,
  [330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(86), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      sym_string,
  [364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      sym_number,
      sym_string,
  [392] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_and,
    ACTIONS(112), 1,
      anon_sym_or,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(110), 3,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
    ACTIONS(108), 4,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(118), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(114), 10,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
    ACTIONS(122), 9,
      anon_sym_print,
      anon_sym_var,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
    ACTIONS(126), 9,
      anon_sym_print,
      anon_sym_var,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [503] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_and,
    ACTIONS(132), 1,
      anon_sym_or,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [538] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(130), 1,
      anon_sym_and,
    ACTIONS(132), 1,
      anon_sym_or,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [573] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(130), 1,
      anon_sym_and,
    ACTIONS(132), 1,
      anon_sym_or,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(140), 8,
      anon_sym_print,
      anon_sym_var,
      anon_sym_while,
      anon_sym_if,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [629] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(130), 1,
      anon_sym_and,
    ACTIONS(132), 1,
      anon_sym_or,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(98), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [664] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym__parenethesized_expression_repeat1,
    ACTIONS(144), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(149), 2,
      sym_number,
      sym_string,
    ACTIONS(152), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym__parenethesized_expression_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(159), 2,
      sym_number,
      sym_string,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym__parenethesized_expression_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(159), 2,
      sym_number,
      sym_string,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(165), 2,
      sym_number,
      sym_string,
    STATE(10), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(167), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(169), 2,
      sym_number,
      sym_string,
    STATE(9), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(171), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(173), 2,
      sym_number,
      sym_string,
    STATE(7), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(177), 2,
      sym_number,
      sym_string,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(181), 2,
      sym_number,
      sym_string,
    STATE(22), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(183), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(185), 2,
      sym_number,
      sym_string,
    STATE(13), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(189), 2,
      sym_number,
      sym_string,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(191), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(193), 2,
      sym_number,
      sym_string,
    STATE(12), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(197), 2,
      sym_number,
      sym_string,
    STATE(20), 4,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__parenethesized_expression,
  [956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_body,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_else,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_body,
  [986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_body,
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym__parenethesized_expression,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SEMI,
  [1027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SEMI,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_identifier,
  [1048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 364,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 459,
  [SMALL_STATE(17)] = 481,
  [SMALL_STATE(18)] = 503,
  [SMALL_STATE(19)] = 538,
  [SMALL_STATE(20)] = 573,
  [SMALL_STATE(21)] = 608,
  [SMALL_STATE(22)] = 629,
  [SMALL_STATE(23)] = 664,
  [SMALL_STATE(24)] = 692,
  [SMALL_STATE(25)] = 720,
  [SMALL_STATE(26)] = 748,
  [SMALL_STATE(27)] = 770,
  [SMALL_STATE(28)] = 792,
  [SMALL_STATE(29)] = 814,
  [SMALL_STATE(30)] = 836,
  [SMALL_STATE(31)] = 858,
  [SMALL_STATE(32)] = 880,
  [SMALL_STATE(33)] = 902,
  [SMALL_STATE(34)] = 924,
  [SMALL_STATE(35)] = 946,
  [SMALL_STATE(36)] = 956,
  [SMALL_STATE(37)] = 966,
  [SMALL_STATE(38)] = 976,
  [SMALL_STATE(39)] = 986,
  [SMALL_STATE(40)] = 996,
  [SMALL_STATE(41)] = 1006,
  [SMALL_STATE(42)] = 1013,
  [SMALL_STATE(43)] = 1020,
  [SMALL_STATE(44)] = 1027,
  [SMALL_STATE(45)] = 1034,
  [SMALL_STATE(46)] = 1041,
  [SMALL_STATE(47)] = 1048,
  [SMALL_STATE(48)] = 1055,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(29),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(46),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(40),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(35),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parenethesized_expression_repeat1, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parenethesized_expression_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_statement, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_statement, 4),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parenethesized_expression_repeat1, 2), SHIFT_REPEAT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parenethesized_expression_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parenethesized_expression_repeat1, 2), SHIFT_REPEAT(14),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parenethesized_expression_repeat1, 2), SHIFT_REPEAT(8),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenethesized_expression, 2),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenethesized_expression, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lox(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
