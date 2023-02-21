
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
# define ROUND(a)((int)a+0.5)
  void main()
{ int gd=DETECT,gm,k;
  float x1,y1,x2,y2,dx,dy,steps,xin,yin,x,y;
  clrscr();
  printf("\n Enter initial point (x1,y1) :\t");
  scanf("%f %f",&x1,&y1);
  printf("\n Enter final point (x2,y2) :\t");
  scanf("%f%f",&x2,&y2);
  dx=x2-x1;
  dy=y2-y1;
  initgraph(&gd,&gm," ");
  if( abs(dx) > abs(dy) )
  steps=abs(dx);
  else
  steps=abs(dy);
  xin=dx/(float) steps;
  yin=dy/(float) steps;
  putpixel(ROUND(x),ROUND(y),YELLOW);
  for(k=0;k<steps;k++)
  { x+=xin;
    y+=yin;
    putpixel(ROUND(x),ROUND(y),YELLOW);
  }
  getch();
  closegraph();
 }