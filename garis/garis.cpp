#include <GL/glut.h>
#include <GL/glut.h>
void titik ();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
glutInitWindowSize(600,800); 
glutInitWindowPosition(50,50); 
glutCreateWindow("Project 1 - Membuat Titik menjadi garis"); 
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

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.0,0.0);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.025,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.05,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.075,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.1,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.125,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.150,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.175,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.200,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.225,0.00);

glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.250,0.00);


glEnd();
glFlush();
}
