#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

main()
{
    float x,y,x1,y1,x2,y2,dx,dy,length;
    int i,gd=DETECT,gm;



    std::cout<<"Enter the value of x1 : ";
    std::cin>>x1;
    std::cout<<"Enter the value of y1 : ";
    std::cin>>y1;
    std::cout<<"Enter the value of x2 : ";
    std::cin>>x2;
    std::cout<<"Enter the value of y2 : ";
    std::cin>>y2;

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
        i=i+1;
        delay(100);
    }

    float a,b,a1,b1,a2,b2;

        if(dx>=dy)
    {
        length=dx;
    }
    else
    {
        length=dy;
    }
    dx=(a2-a1)/length;
    dy=(b2-b1)/length;

    a=x1+0.5;
    b=1+0.5;

    i=1;

    while(i<=length)
    {
        putpixel(x,y,15);
        x=x+dx;
        y=y+dy;
        i=i+1;
        delay(100);
    }



    getch();
    closegraph();
}
