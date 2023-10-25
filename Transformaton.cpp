#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
main()
{
    int x1,y1,x2,y2,i,j,k,r1=3,c1=3,r2=3,c2=3;
   int gd = DETECT, gm;

   int tx,ty,sx,sy;
   int result[10][10];
   int a[3][3]={{x1,y1,1},{x2,y2,1},{0,0,1}};
   int t[3][3]={{1,0,0},{0,1,0},{tx,ty,1}};


while(true)
{
    int select;
    cout<<"Enter your choice"<<endl;
    cout<<"1:Translation \n2:Scaling \n3:Rotation"<<endl;
    cin>>select;
    switch(select)
    {
    case 1:

    cout<<"Enter the values for x1 and y1"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the values for x2 and y2"<<endl;
    cin>>x2>>y2;

    cout<<"Enter tx and ty";
    cin>>tx>>ty;


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
       line(x1+tx, y1+ty, x2+tx, y2+ty);
      break;

    case 2:
    cout<<"Enter the values for x1 and y1"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the values for x2 and y2"<<endl;
    cin>>x2>>y2;

    cout<<"Enter sx and sy"<<endl;
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
    break;

    case 3:

    int gd = DETECT;
    int r,gm,d,x1,y1,x2,y2,xn1,yn1,xn2,yn2;
    float ra,si,co;

    cout<<"Enter the values for x1 and y1"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the values for x2 and y2"<<endl;
    cin>>x2>>y2;

    cout<<"Enter degree of rotation"<<endl;
    cin>>d;

    initgraph(&gd, &gm, "");
    detectgraph(&gd,&gm);

    line(x1, y1, x2, y2);

    xn1=y1;
    yn1=y1;

    r=x2-x1;
    ra=0.0175*d;
    si=sin(ra);
    co=cos(ra);
    xn2=x1+r*co+1;
    yn2=y1+r*si+1;
    line(xn1,yn1,xn2,yn2);
    break;
}
continue;
}
getch();
closegraph();
}

