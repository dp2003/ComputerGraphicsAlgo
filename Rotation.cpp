#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
main()
{int x1,y1,x2,y2,i,j,k,r1=3,c1=3,r2=3,c2=3,theta;
   int gd = DETECT, gm;
   int xnew,ynew;
   int result[10][10],xp,yp;
   int a[3][3]={{cos(theta),sin(theta),0},{-sin(theta),cos(theta),0},{0,0,1}};
   int t[3][3]={{x1,y1,1}};
   int t1[3]={{1,0,0},{0,1,0},{-xp,-yp,1}};
    cout<<"Enter the values for x1 and y1";
    cin>>x1>>y1;
    cout<<"Enter the values for x2 and y2";
    cin>>x2>>y2;
    cout<<"Enter rotation angle";
    cin>>theta;
    theta=theta*(3.14/180);
    initgraph(&gd, &gm, "");
    detectgraph(&gd,&gm);
    line(x1, y1, x2, y2);
      for(i=0; i<r1; i++)
        {
        for(j=0; j<c1; j++)
        cout<<endl;
        }
      cout<<endl;
    for(i=0; i<r2; i++)
        {
         for(j=0; j<c2; j++)
         cout<<endl;
        }
      cout<<endl;
      for(i=0; i<r1; i++)
      for(j=0; j<c2; j++)
        {
         result[i][j] = 0;
        }
      for(i=0; i<r1; i++)
      for(j=0; j<c2; j++)
      for(k=0; k<c1; k++)
      {
         result[i][j]+=(a[i][k]*t[k][j]);
      }

      for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            cout<<endl;
        }
        xnew=x1*cos(theta)-y1*sin(theta);
        ynew=x1*sin(theta)+y1*cos(theta);
    line(x1*xnew, y1*ynew, x2*xnew, y2*ynew);
getch();
closegraph();

}
