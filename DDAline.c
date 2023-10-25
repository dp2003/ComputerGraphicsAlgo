#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
main()
{
    float x,y,x1,y1,x2,y2,dx,dy,length;
    int i,gd,gm;
    clrscr();


    cin>>"Enter the values of x1 :\t";
    cout<<x1;
    cin>>"Enter the value of y1 :\t";
    cout<<y1;
    cin>>"Enter the values of x2 :\t";
    cout<<x2;
    cin>>"Enter the value of y2 :\t";
    cout<<y2;

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy)
    {
        length=dx;
    }
    else
    {
        length=dy;
    }
    dx=(x2-x1)/length;
    dy=(y2-y1)/length;

    x=x1+0.5;
    y=y1+0.5;

    i=1;

    while(i<=length)
    {
        putpixel(x,y,15);
        x=x+dx;
        y=y+dy;
        i=i+l;
        delay(100);
    }

    getch();
    closegraph();
}
