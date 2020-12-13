#ifndef TERMINAL_H
#define TERMINAL_H

#include <stdio.h>

class Terminal{
  static std::string ESC = "\033";
  //Format text
  int RESET = 0;
  int BRIGHT = 1;
  int DIM = 2;
  int UNDERSCORE = 3;

  void reset(){
    printf("\033[00m");
  }
  void setThin(){
    printf("\033[01m");
  }
};

#endif // TERMINAL_H