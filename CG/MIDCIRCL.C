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
void circlemid(int xc,int yc,int r)
{ int x=0,y=r;
  int p=1-r;
  while(x<=y)
  { drawcircle(xc,yc,x,y);
    x++;
    if(p>=0)
    { y--;
      p=p+2*(x-y)+5;
    }
    else
    p=p+2*x+3;
  }
}
void main()
{ int gd=DETECT,gm,xc,yc,r;
  initgraph(&gd,&gm," ");
  printf("\n Enter the centre of circle : ");
  scanf("%d%d",&xc,&yc);
  printf("\n Enter the radius : ");
  scanf("%d",&r);
  circlemid(xc,yc,r);
  getch();
  closegraph();
}
