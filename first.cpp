#include<graphics.h>
main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(300,150,70);
    getch();
    closegraph();
}
