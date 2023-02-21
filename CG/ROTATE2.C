x#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void draw(float arr[3][3])
{
  line(arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
  line(arr[0][0],arr[0][1],arr[2][0],arr[2][1]);
  line(arr[1][0],arr[1][1],arr[2][0],arr[2][1]);
}
void mult(float mat1[][3],float mat2[][3],float res[][3])
{
  int i,j,k;
  for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
      {
         res[i][j]=0;
         for(k=0;k<3;k++)
         {
            res[i][j]+=mat1[i][k]*mat2[k][j];
         }
      }
     }
}
void main()
{
 
 float a[3][3],b[3][3],c[3][3],d[3][3],angle,q,res[3][3],e[3][3],f[3][3];
 int gd=DETECT,gm,i,j;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("Enter triangle matrix ");
 for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
   {
      scanf("%f",&a[i][j]);
   }
    a[i][2]=1;
}
  draw(a);
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {
      if(i==j)
	 b[i][j]=1;
      else
	 b[i][j]=0;
   }
    b[2][0]=-a[0][0];
    b[2][1]=-a[0][1];
}


printf("Enter the angle of rotation: ");
scanf("%f",&angle);
q=(angle*3.14)/180;

for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {
      c[i][j]=0;
   }
    c[0][0]=cos(q);
    c[0][1]=sin(q);
    c[1][0]=-sin(q);
    c[1][1]=cos(q);
    c[2][2]=1;
}

for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {
      if(i==j)
	 d[i][j]=1;
      else
	 d[i][j]=0;
   }
    d[2][0]=a[0][0];
    d[2][1]=a[0][1];
}

mult(a,b,e);
mult(e,c,f);
mult(f,d,res);
draw(res);
getch();
closegraph();
}