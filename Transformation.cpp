#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
main()
{
    int x1,y1,x2,y2,i,j,k,r1=3,c1=3,r2=3,c2=3;
   int gd = DETECT, gm;

   int tx,ty;
   int result[10][10];
   int a[3][3]={{x1,y1,1},{x2,y2,1},{0,0,1}};
   int t[3][3]={{1,0,0},{0,1,0},{tx,ty,1}};

    cout<<"Enter the values for x1 and y1";
    cin>>x1>>y1;
    cout<<"Enter the values for x2 and y2";
    cin>>x2>>y2;

     cout<<"Enter tx and ty";
    cin>>tx>>ty;


    initgraph(&gd, &gm, "");
    detectgraph(&gd,&gm);

    line(x1, y1, x2, y2);



        cout<<"The first matrix is:"<<endl;
      for(i=0; i<r1; i++) {
         for(j=0; j<c1; j++)
         cout<<a[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      cout<<"The second matrix is:"<<endl;
      for(i=0; i<r2; i++) {
         for(j=0; j<c2; j++)
         cout<<t[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      for(i=0; i<r1; i++)
      for(j=0; j<c2; j++) {
         result[i][j] = 0;
      }
      for(i=0; i<r1; i++)
      for(j=0; j<c2; j++)
      for(k=0; k<c1; k++) {
         result[i][j]+=a[i][k]*t[k][j];
      }
      cout<<"Product of the two matrices is:"<<endl;
      for(i=0; i<r1; i++) {
         for(j=0; j<c2; j++)
         cout<<result[i][j]<<" ";
         cout<<endl;
      }
      line(x1+tx, y1+ty, x2+tx, y2+ty);

getch();

closegraph();

}
