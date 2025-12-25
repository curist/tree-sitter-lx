# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a Tree-sitter grammar implementation for the **Lx** programming language, a Lox-derived language. The repository includes:
- Tree-sitter grammar definition (grammar.js)
- Generated C parser (src/parser.c)
- Node.js bindings
- Rust bindings
- Vim/Neovim editor integration with syntax highlighting

## Development Commands

### Build/Generate Parser
```bash
npm run build
```
Runs `tree-sitter generate --no-bindings` to regenerate parser from grammar.js. This must be run after any changes to grammar.js.

### Run Tests
```bash
npm test
```
Runs the tree-sitter test suite against test corpus files in test/corpus/*.

### Parse Files
```bash
npm run parse <file>
```
Parse and display AST for a given file.

### Test Syntax Highlighting
```bash
npm run highlight <file>
```
Tests highlighting on the specified file (e.g., `npm run highlight test/highlight/kitchensink.lx`).

### Build WebAssembly
```bash
npm run build-wasm
```
Builds a WebAssembly version of the parser.

### Prebuild Native Bindings
```bash
npm run prebuildify
```
Prebuild native Node.js bindings for distribution.

## Architecture

### Grammar Definition (grammar.js)

The core grammar is defined in `grammar.js` using tree-sitter's JavaScript DSL. Key architectural aspects:

**Precedence Hierarchy** (grammar.js:8-24): Defines operator precedence from highest to lowest:
- unary operators (!, -)
- multiplication/division/modulo
- addition/subtraction
- bitwise shifts
- relational operators
- equality operators
- bitwise AND/XOR/OR
- logical AND/OR
- assignment

**Expression System**: Lx is expression-oriented. The `_expression` rule (grammar.js:38-50) includes:
- Declarations (variable, function)
- Control flow (if, for, blocks)
- Data structures (arrays, hashmaps)
- Operators (unary, binary, assignment)
- Function calls and field access

**Hashmap Syntax**: Uses `.{` as opening delimiter (grammar.js:53) to distinguish from blocks.

**Block Semantics**: Blocks can contain expressions and end-of-block statements (return, break, continue). The `defer` statement is block-scoped.

**For Loop Design**: Supports both C-style three-part loops and simple condition loops (grammar.js:89-105).

### Generated Artifacts

- `src/parser.c`: Generated C parser (465KB+), do not edit manually
- `src/grammar.json`: JSON representation of grammar
- `src/node-types.json`: Node type definitions for tooling

### Test Suite

Test corpus files in `test/corpus/` define parsing test cases:
- Each test shows input code and expected parse tree structure
- Tests are organized by language feature (expressions, control_flow, declarations, etc.)
- Run tests after any grammar changes to ensure backward compatibility

### Syntax Highlighting

Vim/Neovim integration uses tree-sitter queries:
- `queries/highlights.scm`: Canonical location for Tree-sitter highlight queries
- `vim/queries/lx/highlights.scm`: Symlink to `queries/highlights.scm` for vim plugin compatibility
- `vim/queries/lx/indents.scm` and `injections.scm`: Vim-specific query files
- Supports standard vim highlight groups (@keyword, @function, @variable, @string, etc.)
- Constants are identified by pattern: uppercase first letter followed by alphanumerics

### Bindings

**Node.js**: Configured via binding.gyp, uses Node-API (node-addon-api v7) for native bindings. Built bindings are loaded via node-gyp-build.

**Rust**: Configured via Cargo.toml (edition 2021, tree-sitter ~0.24, tree-sitter-language ~0.1). Build script at bindings/rust/build.rs compiles the C parser. The library exposes a `LANGUAGE` constant using the `LanguageFn` type from tree-sitter-language.

## Migration Status

This project has been migrated to modern tree-sitter tooling:
- Updated from tree-sitter-cli 0.20.7 → 0.24.6
- Migrated Node bindings from NAN → Node-API (node-addon-api v7)
- Updated Rust bindings from tree-sitter 0.20.3 → 0.24
- Configuration migrated from package.json to tree-sitter.json
- Highlights moved to queries/ (symlinked from vim/queries/lx/ for compatibility)

## Important Notes

- Always run `npm run build` after modifying grammar.js to regenerate the parser
- The parser.c file is auto-generated and should never be manually edited
- Test changes with `npm test` before committing
- Grammar changes may require updates to highlight queries in queries/highlights.scm
- The project uses tree-sitter.json for configuration (auto-migrated from package.json)
