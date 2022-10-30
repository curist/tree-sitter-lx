" based on https://github.com/tbastos/vim-lua/blob/master/indent/lua.vim
" & https://gist.github.com/bonsaiviking/8845871
if exists("b:loaded")
  finish
endif
let b:loaded = 1

setlocal nolisp
setlocal autoindent

setlocal indentexpr=GetLxIndent()

let s:openmatch = '\%((\|{\|\[\)'
let s:middlematch = ''
let s:closematch = '\%()\|}\|\]\)'

let s:chained_func_call = "^\\v\\s*[.]\\w+[(]"

function s:GetContents(lnum)
  return substitute(getline(a:lnum), '\v\m//.*$', '', '')
endfunction

function GetLxIndent()
  let save_cursor = getpos(".")

  " Search backwards for the previous non-empty line.
  let plnum = prevnonblank(v:lnum - 1)

  if plnum == 0
    " This is the first non-empty line, use zero indent.
    return 0
  endif

  let contents_cur = s:GetContents(v:lnum)
  let contents_prev = s:GetContents(plnum)

  let i = 0

  "check open keywords on line above
  call cursor(v:lnum, 1)
  let parnum = searchpair(s:openmatch,
        \ s:middlematch, s:closematch, 'mWrb',
        \ v:null, plnum)
  if parnum > 0
    let i += parnum
  endif

  "check closed keywords on current line
  call cursor(plnum, col([plnum,'$']))
  let parnum = searchpair(s:openmatch,
        \ s:middlematch, s:closematch, 'mWr',
        \ v:null, v:lnum)
  if parnum > 0
    let i -= parnum
  endif

  " if the current line chains a function call to previous unchained line
  if contents_prev !~# s:chained_func_call && contents_cur =~# s:chained_func_call
    let i += 1
  endif

  " if the current line chains a function call to previous unchained line
  if contents_prev =~# s:chained_func_call && contents_cur !~# s:chained_func_call
    let i -= 1
  endif

  "restore cursor
  call setpos(".", save_cursor)

  "return the calculated indent
  return indent(plnum) + (&sw * i)

endfunction

