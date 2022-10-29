#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_shell_bang = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COMMA = 5,
  sym_number = 6,
  anon_sym_DQUOTE = 7,
  sym_unescaped_double_string_fragment = 8,
  sym_escape_sequence = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_nil = 12,
  sym_comment = 13,
  sym_source_file = 14,
  sym__expression = 15,
  sym_array = 16,
  sym__primary = 17,
  sym_string = 18,
  sym_boolean = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_array_repeat1 = 21,
  aux_sym_string_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_shell_bang] = "shell_bang",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_array] = "array",
  [sym__primary] = "_primary",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_shell_bang] = sym_shell_bang,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil] = sym_nil,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_array] = sym_array,
  [sym__primary] = sym__primary,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [sym_shell_bang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__primary] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_shell_bang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
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
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_false);
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_shell_bang] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym__expression] = STATE(4),
    [sym_array] = STATE(4),
    [sym__primary] = STATE(4),
    [sym_string] = STATE(4),
    [sym_boolean] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_shell_bang] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(5),
    [sym_array] = STATE(5),
    [sym__primary] = STATE(5),
    [sym_string] = STATE(5),
    [sym_boolean] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(14),
    [sym_array] = STATE(14),
    [sym__primary] = STATE(14),
    [sym_string] = STATE(14),
    [sym_boolean] = STATE(14),
    [aux_sym_array_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(7),
    [sym_array] = STATE(7),
    [sym__primary] = STATE(7),
    [sym_string] = STATE(7),
    [sym_boolean] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_number] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(7),
    [sym_array] = STATE(7),
    [sym__primary] = STATE(7),
    [sym_string] = STATE(7),
    [sym_boolean] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_number] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(14),
    [sym_array] = STATE(14),
    [sym__primary] = STATE(14),
    [sym_string] = STATE(14),
    [sym_boolean] = STATE(14),
    [aux_sym_array_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(7),
    [sym_array] = STATE(7),
    [sym__primary] = STATE(7),
    [sym_string] = STATE(7),
    [sym_boolean] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(44),
    [sym_number] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_nil] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(14),
    [sym_array] = STATE(14),
    [sym__primary] = STATE(14),
    [sym_string] = STATE(14),
    [sym_boolean] = STATE(14),
    [aux_sym_array_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(62),
    [sym_number] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_nil] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_number,
      anon_sym_DQUOTE,
  [18] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_number,
      anon_sym_DQUOTE,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_number,
      anon_sym_DQUOTE,
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_number,
      anon_sym_DQUOTE,
  [72] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_number,
      anon_sym_DQUOTE,
  [90] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(93), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
    ACTIONS(95), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_number,
      anon_sym_DQUOTE,
  [109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(99), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
  [125] = 4,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_string_repeat1,
    ACTIONS(103), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [139] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat1,
    ACTIONS(109), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [153] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat1,
    ACTIONS(113), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 18,
  [SMALL_STATE(11)] = 36,
  [SMALL_STATE(12)] = 54,
  [SMALL_STATE(13)] = 72,
  [SMALL_STATE(14)] = 90,
  [SMALL_STATE(15)] = 109,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(16),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(18),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lx(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
