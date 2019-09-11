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
    if(day==1)
    {
        //making sky
        glColor3f(0.0, 0.9, 0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0,380);
        glVertex2f(0,700);
        glVertex2f(1100,700);
        glVertex2f(1100,380);
        glEnd();
    }
}

