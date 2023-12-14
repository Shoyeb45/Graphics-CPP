#include<graphics.h>
#include<conio.h>
#include<math.h>
#define PI		3.14159265358979323846

void LinePara(int x, int y , int length, int angle){
    double rad = (double)  PI*angle/180.00 ;
    line(x, y , x+length*cos(rad), y-length*sin(rad));
}
int main()
{
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
//To make line, use line funtion of graphics library and pass 4 argument, where first two are coordinates of point 1 and later 2 are coordinate of second point.

line(100, 150, 200, 300);
// line(100, 150, 100, 300); //Line parallel to y-axis
// line(100, 150, 200, 150); //Line parallel to x-axis

//obtainig line by a given (x, y) coordinate , length and angle with the x-axis
//We'll make our own funtion for this task
int x=100, y=200, length=150, angle=60;

LinePara(x, y, length,angle);

    getchar();
    closegraph();

    return 0;
}