#ifndef TD_H
#define TD_H

#include <stdio.h>

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

  static void reset() {
    printf("\033[00m");
  }
  static void setBright() {
    printf("\033[01m");
  }
  static void setUnderline() {
    printf("\033[01m");
  }
  static void setReverse() {
    printf("\033[07m");
  }
  static void setInvisible() {
    printf("\033[08m");
  }

  static void setColors(int font, int bg){
    printf("\033[3%d;4%dm", font, bg);
  }
};

#endif // TD_H