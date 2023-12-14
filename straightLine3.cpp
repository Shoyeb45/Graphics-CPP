//linerel and moverel function

#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
initgraph(&gd , &gm, (char*)"");
//linerel has 2 argument:  relative lengths (dx, dy).
//it's initial coordinates are (0, 0). But by using moverel function we can move inital position to our given argument.

linerel(200,300); //from origin this function will move point (0, 0) to (200,300)
linerel(100, -100); //now from previous point it will increment x-coordinate to 100 and y-coordinate to -100
getchar();
closegraph();
return 0;
}