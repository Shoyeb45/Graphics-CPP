//lineto and moveto Function
#include<graphics.h>

int main()
{
    int gd= DETECT , gm;
    initgraph(&gd, &gm, (char*)"");

//lineto takes two argument : coordinate x and y
//Here initial positon is origin so first lineto function will create line from origin to input coordinates.
//And so 2nd lineto will have initial coordinates its previous function's input i.e. 300, 200 
    // lineto(300, 200);
    // lineto(350, 100);

//using moveto function to move initial positon of lineto function

moveto(100, 100);
lineto(250, 170);
lineto(300, 340);
    getch();
    closegraph();

}