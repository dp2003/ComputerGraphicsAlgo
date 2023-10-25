#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
main()
{
    int x1,y1,x2,y2,i,j,k,r1=3,c1=3,r2=3,c2=3;
   int gd = DETECT, gm;

   int sx,sy;
   int result[10][10];
   int a[3][3]={{sx,0,0},{0,sy,0},{0,0,1}};
   int t[3][3]={{x1,y1,1}};

    cout<<"Enter the values for x1 and y1";
    cin>>x1>>y1;
    cout<<"Enter the values for x2 and y2";
    cin>>x2>>y2;

    cout<<"Enter sx and sy";
    cin>>sx>>sy;



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
         result[i][j]+=a[i][k]*t[k][j];
      }

      for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            cout<<endl;
        }

    line(x1*sx, y1*sy, x2*sx, y2*sy);

getch();

closegraph();

}
