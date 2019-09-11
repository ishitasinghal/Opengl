//first including the basic libraries necessary for the program
#include <stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<stdlib.h>

float i=0.0;
float m=0.0;
float n=0.0;
float c=0.0;
float b=0.0;
float p=0.75;
float q=0.47;
float r=0.14;
float e=0.90;
float f=0.91;
float g=0.98;
int count=0;
int day=1;
char ch;

//this function displays the text in the required font.
public void declare(char *s)
{
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *s++);
    }
}

//now let's add objects to our scenery
public void objects()
{
    int a;
    //making sky
    glColor3f(0.0, 0.9, 0.9);
    glBegin(GL_POLYGON);
    glVertex2f(0,380);
    glVertex2f(0,700);
    glVertex2f(1100,700);
    glVertex2f(1100,380);
    glEnd();
    
    //making sun
    for(a=0;a<25;a++)
    {
        glColor3f(1.0,0.9,0.0);
        draw_circle(95,620,1);
    }
    
    //making cloud
    for(a=0;a<=20;a++)
    {
        glColor3f(1.0,1.0,1.0);
        draw_circle(160+m,625,a);
    }
    
    
    for(a=0;a<=35;a++)
    {
        glColor3f(1.0,1.0,1.0);
        draw_circle(200+m,625,a);
        draw_circle(225+m,625,a);
    }
    
    for(a=0;a<=20;a++)
    {
        glColor3f(1.0,1.0,1.0);
        draw_circle(265+m,625,a);
    }
    
    //making grass
    glColor3f(0.6,0.8,0.196078);
    glBegin(GL_POLYGON);
    glVertex2f(0,160);
    glVertex2f(0,380);
    glVertex2f(1100,380);
    glVertex2f(1100,160);
    glEnd();
    
    //making tree 1
    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,135);
    glVertex2f(100,285);
    glVertex2f(140,285);
    glVertex2f(140,135);
    glEnd();
    
    
    for(a=0;a<=40;a++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(40,280,a);
        draw_circle(90,280,a);
        draw_circle(150,280,a);
        draw_circle(210,280,a);
        draw_circle(65,340,a);
        draw_circle(115,340,a);
        draw_circle(175,340,a);
        
    }
    
    for(a=0;a<=55;a++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(115,360,a);
    }
    
    //home

    glColor3f(p,q,r);
    glBegin(GL_POLYGON);
    glVertex2f(550,100);
    glVertex2f(550,330);
    glVertex2f(950,330);
    glVertex2f(950,100);
    glVertex2f(850,100);
    glVertex2f(850,250);
    glVertex2f(650,250);
    glVertex2f(650,100);
    
    glEnd();
glFlush();
    
}
