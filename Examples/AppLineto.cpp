#include<graphics.h>
#include<math.h>
#define MAXPTS 15
#define PI		3.14159265358979323846

struct PTS             //Structures (also called structs) are a way to group several related variables into one place.
{
    int x, y;      //Member of struct(here coordinates)
};

//Fun declaration

void applicationLineto();

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    applicationLineto();

    getchar();
    closegraph();
}

//Function definition

void applicationLineto(){
    //creating struct variable to store all points
    struct  PTS points[MAXPTS];
    
    int i, j, h, w, xcent, ycent ;
    int rad, ang, step;
    int xasp, yasp;  //To store aspect ratio of x and y on screen
    //Aspect ratio = image width/image length
    double aspectRatio;  //To aspect ratio pixel on the screen
    double rads;

    getaspectratio( &xasp, &yasp); //It will read the hardware aspect ratio
    aspectRatio = (double) xasp/ (double) yasp ;

    h = getmaxx();   //getmaxx returns the maximum (screen-relative) x value for the current graphics driver and mode.
    w = getmaxy();    //m,aximum y coordinate

    //Determining centre of circle
    xcent = h/2 , ycent = w/2 ; 
    rad = (h-30)/(aspectRatio * 2);
    step = 360/MAXPTS ;   // Angle of increment

    ang = 0; //initialized angle value to 0
    for(i=0 ; i<MAXPTS; i++){
        rads = (double) ang*PI / 180.0 ;
        points[i].x =  xcent + (int)( cos(rads)* rad);
        points[i].y = ycent - (int) ( sin(rads)* rad *aspectRatio);
        ang+=step;
    }

    circle(xcent, ycent, rad); //draw a circle

    for(i=0 ; i<MAXPTS ; i++){
        for(j=1; j<MAXPTS ; j++){
            moveto(points[i].x, points[i].y);
            lineto(points[j].x , points[j].y);
        }
    }


    

    
}