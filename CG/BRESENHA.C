#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{ int gd=DETECT,gm,x,y,x1,y1,x2,y2,m,dx,dy,d,dt,ds;
  clrscr();
  initgraph(&gd,&gm," ");
  printf("Enter value of (x1,y1) : ");
  scanf("%d%d",&x1,&y1);
  printf("Enter value of (x2,y2) : ");
  scanf("%d%d",&x2,&y2);
  x=x1;
  y=y1;
  dx=x2-x1;
  dy=y2-y1;
  m=dy/dx;
  if(m<1)
  { dt=2*(dy-dx);
    ds=2*dy;
    d=2*dy-dx;
    putpixel(x,y,RED);
    while(x<x2);
    { x++;
      if(d<0)
	d=d+ds;
      else
      { y++;
	d=d+dt;
      }
      putpixel(x,y,RED);
    }
  }
  else
  { dt=2*(dx-dy);
    ds=2*dx;
    d=2*dx-dy;
    putpixel(x,y,RED);
    while(y<y2)
    { y++;
      if(d<0)
	d=d+ds;
      else
      { x++;
	d=d+dt;
      }
      putpixel(x,y,RED);
    }
  }
  getch();
  closegraph();
}

