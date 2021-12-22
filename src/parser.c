#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_print = 6,
  anon_sym_var = 7,
  anon_sym_EQ = 8,
  anon_sym_nil = 9,
  sym_number = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  sym_string = 13,
  sym_source_file = 14,
  sym__statement = 15,
  sym_body = 16,
  sym_print_statement = 17,
  sym__assignment_statement = 18,
  sym__expression_statement = 19,
  sym__expression = 20,
  sym__literal = 21,
  sym_boolean = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_body_repeat1 = 24,
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
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
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
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
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
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
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
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_print);
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
    [anon_sym_nil] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__statement] = STATE(2),
    [sym_body] = STATE(2),
    [sym_print_statement] = STATE(15),
    [sym__assignment_statement] = STATE(15),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_nil] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_string] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_body] = STATE(3),
    [sym_print_statement] = STATE(15),
    [sym__assignment_statement] = STATE(15),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_nil] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_string] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_body] = STATE(3),
    [sym_print_statement] = STATE(15),
    [sym__assignment_statement] = STATE(15),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(26),
    [anon_sym_print] = ACTIONS(29),
    [anon_sym_var] = ACTIONS(32),
    [anon_sym_nil] = ACTIONS(23),
    [sym_number] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(38),
    [anon_sym_false] = ACTIONS(38),
    [sym_string] = ACTIONS(35),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym_print_statement] = STATE(15),
    [sym__assignment_statement] = STATE(15),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [aux_sym_body_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_nil] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_string] = ACTIONS(15),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym_print_statement] = STATE(15),
    [sym__assignment_statement] = STATE(15),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [aux_sym_body_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_nil] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_string] = ACTIONS(15),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_print_statement] = STATE(15),
    [sym__assignment_statement] = STATE(15),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [aux_sym_body_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_print] = ACTIONS(50),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_nil] = ACTIONS(45),
    [sym_number] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_string] = ACTIONS(56),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(64), 6,
      anon_sym_print,
      anon_sym_var,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [19] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
    ACTIONS(68), 6,
      anon_sym_print,
      anon_sym_var,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [37] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
    ACTIONS(72), 6,
      anon_sym_print,
      anon_sym_var,
      anon_sym_nil,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [55] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(74), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(76), 2,
      sym_number,
      sym_string,
    STATE(16), 3,
      sym__expression,
      sym__literal,
      sym_boolean,
  [76] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(78), 2,
      anon_sym_nil,
      sym_identifier,
    ACTIONS(80), 2,
      sym_number,
      sym_string,
    STATE(18), 3,
      sym__expression,
      sym__literal,
      sym_boolean,
  [97] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_SEMI,
  [111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SEMI,
  [125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SEMI,
  [132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_EQ,
  [139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 19,
  [SMALL_STATE(9)] = 37,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 76,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 111,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 132,
  [SMALL_STATE(18)] = 139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(15),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_statement, 4),
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
