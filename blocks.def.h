//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/   /*Update Interval*/ /*Update Signal*/
  // {"",      "sb-nettraf",       1,  16},
  // {"",      "sb-internet",      5,  4},
  // {"",      "sb-music",         0,  11},
  {" ",     "sb-kb-icon",       0,  30},
  {"├─",    "",                 0,  0},
  {"",      "sb-iplocale",      5, 16},
  {"",      "sb-fan",           5,  17},
  {"",      "sb-tasks",         10, 26},
  {"",      "sb-cpu",           5,  18},
  {"",      "sb-load-average",  1,  20},
  {"",      "sb-cpu-levels",    1,  19},
  {"",      "sb-memory",        10, 14},
  {"",      "sb-gputemp",       10, 13},
  {"",      "sb-battery",       5,  3},
  {"",      "sb-volume",        0,  10},
  {"",      "sb-clock",         60, 1},
  {"",      "sb-help-icon",     0,  15},
  // {"⌨",     "kbselect",         0,  30},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:
// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
