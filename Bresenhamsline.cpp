#include<iostream>
#include<graphics.h>
#include<math.h>
main(){
    float x,y,x1,y1,x2,y2,dx,dy,e;
    int i,gd,gm;
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
    x=x1;
    y=y1;

    e= 2*dy-dx;

    i=1;
    do
    {
        putpixel(x,y,15);
        while(e>=0)
        {
            y=y+1;
            e=e-2*dx;
        }
        x=x+1;
        e=e+2*dy;
        i=i+1;
        delay(100);
    }

    while(i<=dx);
    getch();
    closegraph();

}
