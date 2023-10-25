#include<iostream>
#include<graphics.h>
#include<math.h>
main()
{
    int gd,gm,x,y;
    int r;
    float d;
    std::cout<<"Enter the radius of the circle";
    std::cin>>r;

    detectgraph(&gd,&gm);n
    initgraph(&gd,&gm,"");

    x=0;
    y=r;
    d=3-2*r;
    do
    {   putpixel(200+x,200+y,15);
        putpixel(200+y,200+x,15);
        putpixel(200+y,200-x,15);
        putpixel(200+x,200-y,15);
        putpixel(200-x,200-y,15);
        putpixel(200-y,200-x,15);
        putpixel(200-y,200+x,15);
        putpixel(200-x,200+y,15);

        if(d<=0)
        {
            d=d+4*x+6;
        }
        else
        {
            d=d+4*(x-y)+10;
            y=y-1;
        }
        x=x+1;
        delay(100);
    }
    while(x<y);
    getch();
    closegraph();

}
