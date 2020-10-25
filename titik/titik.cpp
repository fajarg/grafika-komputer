#include <GL/glut.h>
#include <GL/glut.h>
void titik ();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
glutInitWindowSize(600,800); 
glutInitWindowPosition(100,100); 
glutCreateWindow("Project 1 - Membuat Titik"); 
glClearColor(0.0,0.0,0.0,0.0); 
glMatrixMode(GL_PROJECTION);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0); 
glutDisplayFunc(titik); 
glutMainLoop();
}
void titik()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5.5);
glBegin(GL_POINTS);

glColor3f(1.5, 0.5, 0.5);
glVertex2f(0.5,0.5);

glColor3f(0.0, 1.0, 1.0);
glVertex2f(0.15,0.15);

glColor3f(0.0, 0.0, 1.0);
glVertex2f(0.25,0.25);

glColor3f(1.0, 0.0, 1.0);
glVertex2f(0.35,0.35);

glColor3f(0.5, 1.0, 0.5);
glVertex2f(0.45,0.45);

glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.55,0.55); 

glColor3f(1.0, 1.5, 8.0);
glVertex2f(0.65,0.65);

glColor3f(0.0, 1.0, 0.0);
glVertex2f(0.75,0.75);

glColor3f(0.75, 0.75, 0.75);
glVertex2f(0.85,0.85);
glEnd();
glFlush();
}
