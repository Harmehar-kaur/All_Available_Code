#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawcircle(int xc,int yc,int x,int y)
{ putpixel(xc+x,yc+y,RED);
  putpixel(xc-x,yc+y,RED);
  putpixel(xc+x,yc-y,RED);
  putpixel(xc-x,yc-y,RED);
  putpixel(xc+y,yc+x,RED);
  putpixel(xc-y,yc+x,RED);
  putpixel(xc+y,yc-x,RED);
  putpixel(xc-y,yc-x,RED);
}
void circlebres(int xc,int yc,int r)
{ int x=0,y=r;
  int d=3-2*r;
  while(x<=y)
  { drawcircle(xc,yc,x,y);
    x++;
    if(d>=0)
    { y--;
      d=d+4*(x-y)+10;
    }
    else
    d=d+4*x+6;
  }
}
void main()
{ int gd=DETECT,gm,xc,yc,r;
  initgraph(&gd,&gm," ");
  printf("\n Enter the centre of circle : ");
  scanf("%d%d",&xc,&yc);
  printf("\n Enter the radius : ");
  scanf("%d",&r);
  circlebres(xc,yc,r);
  getch();
  closegraph();
}
