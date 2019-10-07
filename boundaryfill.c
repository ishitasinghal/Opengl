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
void boundaryfill(int x, int y, int fillc, int boundaryc)
{
float p[3]
getpixel(x, y, float p[3]);
if(currentColor != boundaryc && currentColor != boundaryc && currentColor != boundaryc) {
setpixel(x, y, fillc);
boundaryfill(x+1, y, fillc, boundaryc);
boundaryfill(x-1, y, fillc, boundaryc);
boundaryfill(x, y+1, fillc, boundaryc);
boundaryfill(x, y-1, fillc, boundaryc);
}
}
float color[3];
getpixel(x,y,color);
if((current!=boundary)&&(current!=fill))
{
setpixel(x,y,fill);
floodfill4(x+1,y,fill,boundary);
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
glutMouseFunc(mouse);   
glutMainLoop();   
return 0;
}  
