#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
main()
{
    int i,gd,gm,x,y;
    long d1,d2;
    long rx,ry,rxsq,rysq,tworxsq,tworysq,dx,dy;

    cout<<"Enter x radius of the ellipse";
    cin>>rx;

    cout<<"Enter y radius of the ellipse";
    cin>>ry;

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    rxsq=rx*rx;
    rysq=ry*ry;
    tworxsq=2*rxsq;
    tworysq=2*rysq

    x=0;
    y=ry;

    d1=rysq-rxsq*ry+(0.25*rxsq);
    dx=tworysq*x;
    dy=tworxsq*y;

    do
    {   putpixel(200+x,200+y,15);
        putpixel(200-x,200-y,15);
        putpixel(200+x,200-y,15);
        putpixel(200-x,200+y,15);
        if(d1<0)
        {
            x=x+1;
            y=y;
            dx=dx+tworysq;
            d1=d1+dx+rysq;
        }
        else
        {
            x=x+1;
            y=y-1;
            dx=dx+tworysq;
            dy=dy-tworxsq;
            d1=d1+dx-dy+rysq;
        }
        delay(10);
    }
    while (dx<dy);
    d2=rysq*(x+0.5)*(x+0.5)+rxsq*(y-1)*(y-1)-rxsq*rysq;
    do
    {
        putpixel(200+x,200+y,15);
        putpixel(200-x,200-y,15);
        putpixel(200+x,200-y,15);
        putpixel(200-x,200+y,15);

        if(d2>0)
        {
            x=x;
            y=y-1;

            dy=dy-tworxsq;
            d2=d2-dy+rxsq;

        }
        else
        {
            x=x+1;
            y=y-1;
            dy=dy-tworxsq;
            dx=dx+tworysq;
            d2=d2+dx-dy+rxsq;
        }
    }
    while(y>0);
    getch();
    closegraph();

}
