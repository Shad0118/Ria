#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
float windowHeight = 550;
float windowWidth = 750;
void circle(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void sun(){
    glColor3f(1.0,1.0,0.0);
    circle(1,1,1);
}

GLfloat sunT=-10.0f;
GLfloat sunA=0.07f;

void sunTR(int value){

    if(sunT > 86)
        sunT=-10;
        sunT+=sunA;
        glutPostRedisplay();
        glutTimerFunc(10,sunTR,0);

}


GLfloat boatT=10.0f;
GLfloat boatA=0.07f;

void boatTR(int value){

    if(boatT < 0)
        boatT = 12;
        boatT -=sunA;
        glutPostRedisplay();
        glutTimerFunc(40,boatTR,0);

}


void boat(){
glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.6,0.1,0.0);
        glVertex2f(20,18);
        glVertex2f(25,15);
        glVertex2f(35,15);
        glVertex2f(40,18);
    glEnd();
     glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1,0.1,0.0);
        glVertex2f(25,20);
        glVertex2f(25,18);
        glVertex2f(35,18);
        glVertex2f(35,20);
    glEnd();
     glPopMatrix();}
void display(void)


{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(0, 85, 0, 85);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();



     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.0,0.7,1.0);
        glVertex2f(0,0);
        glVertex2f(0,85);
        glVertex2f(85,85);
        glVertex2f(85,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0,0);
        glVertex2f(0,50);
        glVertex2f(85,50);
        glVertex2f(85,0);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.0,0.5,1.0);
        glVertex2f(45,30);
        glVertex2f(27,50);
        glVertex2f(30,50);
        glVertex2f(65,30);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.0,0.5,1.0);
        glVertex2f(0,0);
        glVertex2f(45,30);
        glVertex2f(65,30);
        glVertex2f(30,0);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.7,0.0);
        glVertex2f(0,50);
        glVertex2f(5,57);
        glVertex2f(10,50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.7,0.0);
        glVertex2f(15,50);
        glVertex2f(24,57);
        glVertex2f(33,50);
    glEnd();
    glPopMatrix();


       glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.8,0.0);
        glVertex2f(5,50);
        glVertex2f(15,62);
        glVertex2f(25,50);
    glEnd();
    glPopMatrix();

 glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.6,0.0);
        glVertex2f(20,50);
        glVertex2f(30,58);
        glVertex2f(40,50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.5,0.0);
        glVertex2f(45,50);
        glVertex2f(55,60);
        glVertex2f(65,50);
    glEnd();
    glPopMatrix();
glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.7,0.0);
        glVertex2f(24,50);
        glVertex2f(40,62);
        glVertex2f(57,50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.5,0.0);
        glVertex2f(75,50);
        glVertex2f(82,60);
        glVertex2f(88,50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.7,0.0);
        glVertex2f(57,50);
        glVertex2f(70,63);
        glVertex2f(82,50);
    glEnd();
    glPopMatrix();
 glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.3,0.1,0.0);
        glVertex2f(19,40);
        glVertex2f(19,23);
        glVertex2f(23,23);
        glVertex2f(23,40);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.5,0.0);
        glVertex2f(10,40);
        glVertex2f(22,52);
        glVertex2f(35,40);
    glEnd();
    glPopMatrix();
 glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.5,0.0);
        glVertex2f(11,45);
        glVertex2f(22,62);
        glVertex2f(33,45);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.0,0.2);
        glVertex2f(0,35);
        glVertex2f(10,45);
        glVertex2f(20,35);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.9,0.8,0.0);
        glVertex2f(2,35);
        glVertex2f(2,25);
        glVertex2f(18,25);
        glVertex2f(18,35);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.7,0.0,0.0);
        glVertex2f(8,30);
        glVertex2f(8,25);
        glVertex2f(12,25);
        glVertex2f(12,30);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.7,0.0,0.0);
        glVertex2f(3,30);
        glVertex2f(3,28);
        glVertex2f(6,28);
        glVertex2f(6,30);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.7,0.0,0.0);
        glVertex2f(14,30);
        glVertex2f(14,28);
        glVertex2f(17,28);
        glVertex2f(17,30);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4,0.0,0.5);
        glVertex2f(1,25);
        glVertex2f(1,23);
        glVertex2f(19,23);
        glVertex2f(19,25);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_LINES);
        glColor3f(0.1,0.1,0.0);
        glVertex2f(22,20);
        glVertex2f(22,15);
    glEnd();
     glPopMatrix();

     glPushMatrix();
    glTranslatef(sunT,70,0);
    glScalef(7,7.5,0);
    sun();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(boatT,0,0);
    glScalef(1,1,0);
    boat();
    glPopMatrix();



    glFlush();
    glutSwapBuffers();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Basic Village");

    glutDisplayFunc(display);
    glutTimerFunc(10,sunTR,0);
    glutTimerFunc(10,boatTR,0);


    glutMainLoop();

    return 0;
}
