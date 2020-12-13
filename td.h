#ifndef TD_H
#define TD_H

#include <stdio.h>
#include <vector>

class TD
{
public:
  // COLORS
  static const int black = 0;
  static const int red = 1;
  static const int green = 2;
  static const int yellow = 3;
  static const int blue = 4;
  static const int purple = 5;
  static const int cyan = 6;
  static const int white = 7;

  // STYLES
  static const int bright = 1;
  static const int italic = 3;
  static const int underlined = 4;
  static const int reversed = 7;
  static const int invisible = 8;

  static void setColors(int font, int bg){
    printf("\033[3%d;4%dm", font, bg);
  }

  static void setStyle(int style){
    printf("\033[0%dm", style);
  }

  static void setStyle(std::vector<int> styles){
    for(int el : styles){
      printf("\033[0%dm", el);
    }
  }

  static void reset() {
    printf("\033[00m");
  }
  static void goHome(){
    printf("\033[H");
  }
  static void clrscr(){
    printf("\033[2J");
  }
  static void gotoxy(int x, int y){
    printf("\033[%d;%dH", y, x);
  }
};

#endif // TD_H