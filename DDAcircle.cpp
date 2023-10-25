#include<iostream>
#include<graphics.h>
#include<math.h>
main()
{
    float x1,y1,x2,y2,startx,starty,ep;
    int gm,gd,i,val;

    int r;

    std::cout<<"Enter the radius of circle :";
    std::cin>>r;

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    x1=r*cos(0);
    y1=r*sin(0);
    startx=x1;
    starty=y1;

    i=0;
    do
    {
        val=pow(2,i);
        i++;
    }
    while(val<r);
    ep= 1/pow(2,i-1);

    do{
        x2 = x1+ y1*ep;
        y2 = y1- ep*x2;
        putpixel(200+x2,200+y2,15);
        x1=x2;
        y1=y2;
        std::cout<<"x2 =    "<<(int)x2<<"    y2=     "<<(int)y2<<"    ep=     "<<ep<<"\n";
        delay(10);

    }
    while((y1-starty)<ep||(startx-x1)>ep);
    getch();
    closegraph();
}
