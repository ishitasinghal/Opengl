#include <GL/glut.h>
#include<stdio.h>
#include<math.h>
void display()
{
int i;float x,y;
glClear(GL_COLOR_BUFFER_BIT);

//HUT BASE
glBegin(GL_POLYGON);
glColor3f(0.803f,0.9f,0.235f);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.6,-0.5);
glVertex2f(-0.6,-1);
glVertex2f(-0.9,-1);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.929,0.960,0.458);
glVertex2f(-0.6,-0.5);
glVertex2f(0.2,-0.5);
glVertex2f(0.2,-1);
glVertex2f(-0.6,-1);
glEnd();

//HUT TOP
glBegin(GL_TRIANGLES);
glColor3f(0.925f,0.443f,0.294f);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.6,-0.5);
glVertex2f(-0.75,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.952f,0.654f,0.564f);
glVertex2f(-0.6,-0.5);
glVertex2f(-0.75,0);
glVertex2f(0,0);
glVertex2f(0.2,-0.5);
glEnd();


//hut door
glBegin(GL_POLYGON);
glColor3f(0.392f,0.254f,0.149f);
glVertex2f(-0.3,-1);
glVertex2f(-0.1,-1);
glVertex2f(-0.1,-0.75);
glVertex2f(-0.3,-0.75);
glEnd();


//hut windows
glBegin(GL_POLYGON);
glColor3f(0.392f,0.254f,0.149f);
glVertex2f(-0.5,-0.60);
glVertex2f(-0.4,-0.60);
glVertex2f(-0.4,-0.70);
glVertex2f(-0.5,-0.70);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.392f,0.254f,0.149f);
glVertex2f(0,-0.60);
glVertex2f(0.1,-0.60);
glVertex2f(0.1,-0.70);
glVertex2f(0,-0.70);
glEnd();

//sun
glBegin(GL_POLYGON);
glColor3f(1,1,0);
 x=-0.7;
 y=0.7;
 double r= .2;
 for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+ r*cos(theta),y+r*sin(theta));
}
glEnd();

//Tree branch
glBegin(GL_POLYGON);
glColor3f(0.392f,0.254f,0.149f);
glVertex2f(0.5,-1);
glVertex2f(0.7,-1);
glVertex2f(0.7,0);
glVertex2f(0.6,-0.2);
glVertex2f(0.5,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex2f(0.5,0);
glVertex2f(0.6,-0.2);
glVertex2f(0.7,0);
glEnd();

//leaves
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.4;
y=0.0;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.8;
y=0.0;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.3;
y=0.2;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.9;
y=0.2;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.6;
y=0.2;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.4;
y=0.5;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
x=0.7;
y=0.5;
r= .2;
for(double theta=0;theta<360;theta++)
{
 glVertex2f(x+r*cos(theta),y+r*sin(theta));
}
glEnd();



glutSwapBuffers();
}
int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutInitWindowPosition(100,100);
glutCreateWindow("Hut");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

