#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{ int gd=DETECT,gm,i;
  clrscr();
  initgraph(&gd,&gm,"C\\:TURBOC3\\BGI");
  for(i=100;i<400;i++)
  putpixel(200,i,YELLOW);
  getch();
  closegraph();
}