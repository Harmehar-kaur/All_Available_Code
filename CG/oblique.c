#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void cube(int x[], int y[])
{
line(x[0], y[0], x[1], y[1]);
line(x[1], y[1], x[2], y[2]);
line(x[2], y[2], x[3], y[3]);
line(x[3], y[3], x[0], y[0]);
line(x[0], y[0], x[4], y[4]);
line(x[1], y[1], x[5], y[5]);
line(x[2], y[2], x[6], y[6]);
line(x[3], y[3], x[7], y[7]);
line(x[4], y[4], x[5], y[5]);
line(x[5], y[5], x[6], y[6]);
line(x[6], y[6], x[7], y[7]);
line(x[7], y[7], x[4], y[4]);
}
void main()
{
int gd = DETECT, gm;
int i, j, x[8], y[8], z[8], xp[8], yp[8], zp[8], a, b,
c;
initgraph(&gd, &gm, " ");
printf("Enter the xyz coordinates\n");
for(i=0; i<8; i++)
{
 scanf("%d%d%d", &x[i], &y[i], &z[i]);
}
cube(x,y);
printf("Enter vector coefficients\n");
scanf("%d%d%d", &a, &b, &c);
for(j=0; j<8; j++)
{
 xp[j] = x[j] - (a*z[j]/c);
 yp[j] = y[j] - (b*z[j]/c);
}
cube(xp,yp);
getch();
closegraph();
}