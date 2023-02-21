#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void mm(float p[][3],float q[][3],float r[][3])
{ int i,j,k,sum=0;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    { sum=0;
      for(k=0;k<3;k++)
      sum+=p[i][k]*q[k][j];
     r[i][j]=sum;
   }
}
void main()
{ int i,j,gd=DETECT,gm;
  float q,angle,a[3][3],b[3][3],c[3][3],d[3][3],m1[3][3],m2[3][3],res[3][3];
  initgraph(&gd,&gm,"C\\:TURBOC3\\BGI");
  printf("\n Enter triangle matrix ");
  for(i=0;i<3;i++)
  { for(j=0;j<2;j++)
    { scanf("%f",&a[i][j]); }
    a[i][2]=1;
  }
  line(a[0][0],a[0][1],a[1][0],a[1][1]);
  line(a[0][0],a[0][1],a[2][0],a[2][1]);
  line(a[1][0],a[1][1],a[2][0],a[2][1]);
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    {if(i==j)
       b[i][j]=1;
     else
       b[i][j]=0;
    }
  b[2][0]=-a[0][0];
  b[2][1]=-a[0][1];
  printf("\n Enter the angle of rotation ");
  scanf("%f",&angle);
  q=(angle*3.14)/180;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    {
       c[i][j]=0;
    }
  c[0][0]=cos(q);
  c[0][1]=sin(q);
  c[1][0]=-sin(q);
  c[1][1]=cos(q);
  c[2][2]=1;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    {if(i==j)
       d[i][j]=1;
     else
       d[i][j]=0;
    }
  d[2][0]=a[0][0];
  d[2][1]=a[0][1];
  mm(a,b,m1);
  mm(m1,c,m2);
  mm(m2,d,res);
  printf("\n Entered triangle is rotated.");
  line(res[0][0],res[0][1],res[1][0],res[1][1]);
  line(res[0][0],res[0][1],res[2][0],res[2][1]);
  line(res[1][0],res[1][1],res[2][0],res[2][1]);
  getch();
  closegraph();
}