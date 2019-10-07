#include<stdio.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glut.h>

typedef struct Point {
    GLint x;
    GLint y;
}
Point;

typedef struct Color {
GLfloat r;
GLfloat g;
GLfloat b;
}
Color;

void setpixel(int x, int y)
{
glColor3f(0.0, 1.0, 1.0);   
glBegin(GL_POINTS);
glVertex2i(x, y);  
glEnd();
glFlush(); 
}

//this function returns the pixel data from the frame buffer
Color getpixel(GLint x, GLint y) {
    Color color;
    glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, &color);
    return color;
}
 
//drawing a polygon to fill
void polygon(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
glColor3f(1.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2i(x1, y1);
glVertex2i(x1, y2);
glVertex2i(x2, y2); 
glVertex2i(x2, y1);
glVertex2i(x3, y4);
glVertex2i(x4, y3);
glVertex2i(x3, y4);
glVertex2i(x4, y3);  
glEnd();   
glFlush();
}

//display function
void display(void)
{
glClearColor(0.2, 0.4,0.0, 1.0);
glClear(GL_COLOR_BUFFER_BIT);
polygon(150,250,200,300, 350, 421, 534, 564); 
glFlush();
}

//actual boundary fill
void boundaryfill(int x, int y, Color fillc, Color boundaryc)
{
Color color;
color = getpixel(x,y);
if(color.r == fillc.r && color.g == fillc.g && color.b == fillc.b)
{
//setcolor(fillc) ;
setpixel(x,y);
boundaryfill(x+1,y,fillc,boundaryc);
boundaryfill(x-1,y,fillc,boundaryc);
boundaryfill(x,y+1,fillc,boundaryc);
boundaryfill(x,y-1,fillc,boundaryc);
}
}


void myinit()   
{      
glViewport(0,0,600,500);     
gluOrtho2D(0.0,(GLdouble)600,0.0,(GLdouble)500);     
}   
int main(int argc, char** argv)   
{   
glutInit(&argc,argv);   
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);   
glutInitWindowSize(600,500);   
glutCreateWindow("Boundary-Fill-Recursive"); 
glutDisplayFunc(display);   
myinit();      
glutMainLoop();   
return 0;
}  
