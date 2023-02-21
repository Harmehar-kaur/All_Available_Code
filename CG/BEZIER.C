#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
void main()
{ int gd = DETECT, gm,x[4], y[4],i;
  double u;
  printf("\nEnter the x and y coordinate \n");
  for(i=0; i<4; i++)
  scanf("%d%d", &x[i], &y[i]);
  initgraph(&gd, &gm, " ");
  for(u= 0.0; u< 1.0; u+= 0.0005)
  {
  double xt =pow(1-u,3)*x[0]+3*u*pow(1-u,2)*x[1]+3*pow(u,2)*(1-u)*x[2]+pow(u,3)*x[3];
  double yt =pow(1-u,3)*y[0]+3*u*pow(1-u,2)*y[1]+3*pow(u,2)*(1-u)*y[2]+pow(u,3)*y[3];
  putpixel(xt, yt, WHITE);
  }
  getch();
  closegraph();
}