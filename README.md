# intro

**Lx** grammer in [tree-sitter](https://tree-sitter.github.io/tree-sitter/).

**Lx** is a [Lox](https://github.com/munificent/craftinginterpreters/wiki/Lox-implementations) derived programming language.


# vim plugin
This repo also contains vim filetype plugins.

### install using [vim-plug](https://github.com/junegunn/vim-plug)

```vim
Plug 'curist/tree-sitter-lx', { 'rtp': 'vim' }
```

### neovim tree-sitter config

```lua
local parser_config = require 'nvim-treesitter.parsers'.get_parser_configs()
parser_config.lx = {
  install_info = {
    url = "~/.config/nvim/plugged/tree-sitter-lx",
    -- XXX: ^ may need to change this to where you install plugins
    files = {"src/parser.c"},
    branch = "main",
  },
}
```
