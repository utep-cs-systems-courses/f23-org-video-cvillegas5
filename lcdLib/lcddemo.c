/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

f1()
{
  for (int i = 0; i <30; i++)
    drawPixel(30+i,i,COLOR_PINK);
}

f2(){
  for(int i =0; i<30; i++)
    drawPixel(i,30-i, COLOR_PINK);
}

makex(int f){
  for (int i = 0; i < 30; i++)
    {
      drawPixel(f+i,f+i, COLOR_PINK);
      drawPixel(f+i,f+(30-i), COLOR_PINK);
    }
}

fsquare(){
  for(int i = 0; i < 30; i++){
    drawPixel(0,i, COLOR_PINK);
    drawPixel(30,i, COLOR_PINK);
    drawPixel(i,0, COLOR_PINK);
    drawPixel(i,30, COLOR_PINK);
  }
}
/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLACK);

  // drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  makex(30);
 
}
