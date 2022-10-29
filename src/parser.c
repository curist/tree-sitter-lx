#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  sym_shell_bang = 2,
  anon_sym_and = 3,
  anon_sym_or = 4,
  anon_sym_PLUS = 5,
  anon_sym_DASH = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_LT = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_GT = 14,
  anon_sym_LBRACK = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACK = 17,
  sym_number = 18,
  anon_sym_DQUOTE = 19,
  sym_unescaped_double_string_fragment = 20,
  sym_escape_sequence = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  sym_nil = 24,
  anon_sym_SLASH_SLASH = 25,
  aux_sym_comment_token1 = 26,
  sym_source_file = 27,
  sym__expression = 28,
  sym_binary_expression = 29,
  sym_array = 30,
  sym__primary = 31,
  sym_string = 32,
  sym_boolean = 33,
  sym_comment = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_array_repeat1 = 36,
  aux_sym_string_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_shell_bang] = "shell_bang",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil] = "nil",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_array] = "array",
  [sym__primary] = "_primary",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_shell_bang] = sym_shell_bang,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil] = sym_nil,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_array] = sym_array,
  [sym__primary] = sym__primary,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
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
  [anon_sym_LT] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
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
  [sym_comment] = {
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

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(15);
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
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
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
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 17:
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 0},
  [37] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_shell_bang] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__expression] = STATE(16),
    [sym_binary_expression] = STATE(10),
    [sym_array] = STATE(10),
    [sym__primary] = STATE(10),
    [sym_string] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_shell_bang] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_nil] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [sym_nil] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_nil] = ACTIONS(53),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_nil] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_nil] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(75),
    [sym_number] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [sym_nil] = ACTIONS(77),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__expression,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [42] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym__expression,
    STATE(18), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_array_repeat1,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [84] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__expression,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [126] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym__expression,
    ACTIONS(87), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(20), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [166] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__expression,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [208] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym__expression,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_array_repeat1,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [250] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym__expression,
    ACTIONS(104), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(23), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [290] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym__expression,
    STATE(24), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [326] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym__expression,
    STATE(25), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [362] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym__expression,
    STATE(26), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [398] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym__expression,
    STATE(27), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [434] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym__expression,
    STATE(28), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [470] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym__expression,
    STATE(29), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym_identifier,
      sym_nil,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_string,
      sym_boolean,
    STATE(10), 3,
      sym_binary_expression,
      sym_array,
      sym__primary,
  [506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(121), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
  [525] = 4,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(125), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
    STATE(31), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [540] = 5,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_string_repeat1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [557] = 5,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [574] = 4,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [588] = 3,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
  [598] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
  [608] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 42,
  [SMALL_STATE(19)] = 84,
  [SMALL_STATE(20)] = 126,
  [SMALL_STATE(21)] = 166,
  [SMALL_STATE(22)] = 208,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 362,
  [SMALL_STATE(27)] = 398,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 470,
  [SMALL_STATE(30)] = 506,
  [SMALL_STATE(31)] = 525,
  [SMALL_STATE(32)] = 540,
  [SMALL_STATE(33)] = 557,
  [SMALL_STATE(34)] = 574,
  [SMALL_STATE(35)] = 588,
  [SMALL_STATE(36)] = 598,
  [SMALL_STATE(37)] = 608,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(18),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
