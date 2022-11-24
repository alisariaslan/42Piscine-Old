# 42kocaeli

access-token at mail preferences


Vim Keyboard Shortcuts

You will spend a significant part of your time using a text editor, so you might as well pick a good one, be it Vim or Emacs or else. Below is a cheat sheet list of the commands I use every day. To get a better understanding of the logic behind the editor, check out Coming Home to Vim by Steve Losh.
First contact with the editor

Vim has three main modes: default, insert and visual. In the default mode, you don't insert text, but you can move around, copy-paste or type commands. Commands start with a column : and a word such as e (edit) or q (quit). For example:

Open and close files
:e {file} 	edit another file 
:w 	write file
:wq 	write file and exit
:q! 	exit without saving

When using Vim, if for some reason you don't understand what is happenning, there is one recovery strategy: hit Escape repeatedly and you will always come back to the default mode. You can then exit with :q and start afresh.

Once you are in default mode, you can move the cursor around by hitting directly the motion keys on your keyboard:

Motions
k 	up 
h 	left
l 	right 
j 	down
G 	end of buffer 
gg 	beginning of buffer
^ 	beginning of line 
$ 	end of line
{ 	one paragraph backward 
} 	one paragraph forward

To start typing text, switch to insert mode with one of the following keys:

Switching to insert mode
i 	insert text before the cursor 
I 	insert text from the beginning of the line
a 	append text after the cursor 
A 	append text at the end of the line
o 	insert text in a new line below the cursor 
O 	insert text in a new line above the cursor

When you are done inserting, hit Escape to switch back to default mode.
Basic text manipulation

In Vim, whatever you delete (be it one character or a whole paragraph) gets copied to the "yank ring". In default mode, you can move around characters or lines by deleting and pasting them:

Cut and paste
x 	delete character under the cursor 
X 	delete character before the cursor
dd 	delete line 
D 	delete from cursor to end of line
p 	paste after the cursor 
P 	paste at the cursor
"+p 	paste from system clipboard after the cursor 
"+P 	paste from system clipboard at the cursor

To select text, you will need to switch to visual mode, which is more or less a "character selection" mode.

Select and copy
v 	switch to visual mode 
V 	switch to visual line mode
y 	copy (yank) 
"+y 	copy to system clipboard

When you switch to visual mode, the current position of the cursor will become the beginning of your selection. You can then use the motion keys, as in default mode, to move over to the end of your selection. When you yank (y), Vim will automatically bring you back to default mode, with your selection copied into the yank ring. You can finally paste it with p or P.
Undo and redo

Now is a good time to tell you how to undo and redo your changes:
u 	undo 
Ctrl + r 	redo

Vim will let you can rewind your changes as far as you like. The redo list will be emptied as soon as you make a new change.
Hard line wrapping

In visual mode, you can re-apply hard line wrapping to the selected lines of a paragraph by:
V 	switch to visual line selection mode 
gq 	wrap selected lines
{ 	move cursor before the current paragraph 
} 	move cursor after the current paragraph

The number of characters N that defines the paragraph width can be set on the fly or in your Vim configuration by :set textwidth=N.
Commands
Search and replace

In default mode, you can use the following:
/{pattern} 	search forward from cursor 
?{pattern} 	search backward from cursor
n 	next occurrence of search pattern 
N 	previous occurrence of search pattern
:%s/{pattern}/{string}/ 	replace all matches of a pattern 
:s/{pattern}/{string} 	(in visual mode) replace all matches of a pattern in the selected area

Note that searching is not a command (it does not start with a column), but replacing is. The % in the first replacing command indicates that the scope of replacements is the whole file. The full syntax of the command is actually :{range}s/{pattern}/{string}. When you are in visual mode and press :, Vim should automatically complete it with '<'> (a range meaning "in the current selection"), so that appending s/{pattern}/{string} will only replace in the current selection.
Sort lines

In visual line selection mode, you can sort the selected lines by:
:sort 	sort selected lines 	:sort u 	sort lines, removing dupplicates

The broader syntax of the command is :{range}sort, so that :'a,.sort will sort lines from mark a to the current line.
Programming
Go to variable definition

In default mode, you can use the following shortcuts to jump to the next occurrence of a symbol in your code, or to the definition of a symbol:

* 	search for the exact word under the cursor 
g* 	same as * but allows partial matches
gd 	go to (local) variable definition 
gD 	go to (global) variable definition

Since * starts a search, you can then navigate between the next and previous occurrences using the standard n and N.
Go to function definition

If you are programming in C or C++, you can use use vim with ctags. The following shortcuts are available by default:
Ctrl + ] 	search for tag under the cursor and jump to first match 	Ctrl + T 	jump back in the tag stack
g] 	search for tag under the cursor and list matches 	:ts 	list matches for the last tag search
:tn 	jump to the next matching tag 	:tp 	jump to the previous matching tag
