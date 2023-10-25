#include<iostream>
#include<graphics.h>
#include<math.h>
main()
{
    int gd,gm,x,y,r;
    float p;
    std::cout<<"Enter the radius of the circle";
    std::cin>>r;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    x=0;
    y=r;
    p=1.25-r;
    do
    {
        putpixel(200+x,200+y,10);
        putpixel(200+y,200+x,11);
        putpixel(200+y,200-x,12);
        putpixel(200+x,200-y,13);
        putpixel(200-x,200-y,14);
        putpixel(200-y,200-x,6);
        putpixel(200-y,200+x,7);
        putpixel(200-x,200+y,8);

        if(p<0)
        {
            x=x+1;
            y=y;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x-y)+1;
        }
        delay(100);
    }
    while(x<y);
    getch();
    closegraph();
}
