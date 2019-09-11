//including the basic necessities to run the program
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<stdlib.h>

//drawing a tree
public void tree(int t, int q)
{
    int r=14;
    r=14;
    setfillstyle(6,BROWN);         //sets the current fill pattern and colour, in this case brown.
    rectangle(140+t,380+q,160+t,330+q);   //we need a rectangle
    floodfill(151+t,342+q,2);         //floodfill is used to fill the area we want to fill in colour
    setfillstyle(10,GREEN);           //sets the colour to green 
    fillellipse(140+t,350+q,r,r);       //this method fills the ellipse bounded by the rectangle with                      given coordinates
    fillellipse(155+t,320+q,r,r);
    fillellipse(180+t,330+q,r,r);
    fillellipse(200+t,355+q,r,r);
}

public void main()
{
    int gd=DETECT,grmode;              //detect is from a header file used in C and grmode is the graphics mode.
    int i,j,k,t,q,r;                  //variables are defined here that are used in the program
    float x,y;
    initgraph(&gd,&grmode,"c:\\tc\\bgi");     //this is the initialize graph function that finds out the address of the graphic drivers(gd)     //bgi is the directory where the graphic files are present
    setcolor(2);               //sets the colour to green(2 is the colour code)
    rectangle(0,0,getmaxx(),getmaxy());   //maxx returns the highest x value and maxy return for y’s highest value
    for(i=0;i<getmaxx();i+=120)
    {
        line(i,220,i+50,160);
        line(i+40,150,i+100,240);    //simply makes a line
    }
    
    t=10;
    line(0,480,getmaxx(),310);
    B:line(40+t,270,40+t,310);
    line(40+t,310,50+t,310);
    line(50+t,310,60+t,310);
    line(60+t,310,70+t,310);
    line(120+t,310,70+t,310);
    line(60+t,310,60+t,290);
    line(50+t,290,50+t,310);
    line(60+t,290,50+t,290);
    line(80+t,320,80+t,280);
    line(120+t,320,130+t,280);
    line(80+t,270,130+t,280);
    line(50+t,280,80+t,280);
    line(50+t,270,65+t,260);
    line(60+t,260,80+t,280);
    line(60+t,260,110+t,260);
    
    line(130+t,280,110+t,260);
    setfillstyle(SOLID_FILL,DARKGRAY);  //solidfill fills the entire figure with colour
    floodfill(51+t,282,2);
    setfillstyle(SOLID_FILL,RED);
    floodfill(61+t,302,2);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(81+t,282,2);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(66+t,270,2);
    setfillstyle(4,BROWN);
    floodfill(100+t,270,2);
    if(t==10)
    {
    t=320;
    goto B;
    }
    
    tree(0,-10);
    tree(100,-20);
    tree(30,-100);
    tree(350,-60);
    tree(160,-50);
//circle();

    setfillstyle(SOLID_FILL,12);
    fillellipse(150,80,35,35);
    
    setfillstyle(2,LIGHTBLUE);
    floodfill(10,10,2);
    
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(1,getmaxy()-1,2);
    
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(49,270,2);
    
    //x=150;
    //y=80;
    for(i=36;i<80;i++)
    for(j=0;j<=360;j+=10)
    {
    x=150+i*cos(((float)j*3.14)/180);
    y=80+i*sin(((float)j*3.14)/180);
    putpixel(x,y,LIGHTRED);
    }
    
    getch();
    }
