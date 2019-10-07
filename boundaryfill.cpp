#include<stdio.h>
#include<GL/glut.h>

void setpixel(int x, int y, float c[3])    //this function sets the pixel
{
glBegin(GL_POINTS);
glColor3f(1.0, 0.0, 1.0);
glVertex2f(x,y);
glEnd();
glFlush();
}
//this function returns the pixel data from the frame buffer
void getpixel(int x, int y, float pixels[3])
{
glReadPixels(x,y,1.0,1.0,GL_RGB,GL_FLOAT,pixels);
}
 
//drawing a polygon to fill
void polygon(int x1, int y1, int x2, int y2)
{
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(x1, y1);
glVertex2i(x1, y2);
glVertex2i(x2, y2); 
glVertex2i(x2, y1);  
glEnd();   
glFlush();
}

//display function
void display()
{
glClearColor(0.2, 0.4,0.0, 1.0);
glClear(GL_COLOR_BUFFER_BIT);
polygon(150,250,200,300); 
glFlush();
}

//actual boundary fill
void(boundaryfill(int x, int y, int fillc, int boundaryc)
{
