set ruler
set noswapfile
set nobackup
set nonu

set tabstop=4
set expandtab "turn tab keypresses into spaces. you can still insert real tabs as [Ctrl]-V [Tab]

set cindent
set shiftwidth=4

set showmatch
set incsearch
set hls

set history=8888

syntax on
colorscheme desert

set encoding=utf-8

" turn to the position where exit last time
if has("autocmd")
    au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
endif
