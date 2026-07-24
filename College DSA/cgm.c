#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>


int main(){
    int gd = DETECT, gm;
    int x1,x2, y2,y1;
    float x,y,dx,dy,steps, xinc, yinc;
    int i;
    initgraph(&gd, &dm, "C:\\TURBOC3\\BGI");

    printf("Enter the starting point (x1, y1):");
    scanf(%d %d, &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;
    if(fabs(dx) > fabs(dy)){
        stops = fabs(dx);
    } else 
    steps = fabs(dx);

    xinc = dx/steps;
    yinc = dy/steps;
    x = x1;
    y = y1;

    for(i= 0; i<steps; i++){
        putpixel((int)(x+0.5), (int)(y+0.5) , WHITE);
        x = x + xinc;
        y = y + yinc;
        delay(50);
    }
    
    getch();
    closegraph();
    return 0;
}
