#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
float a=0,b=50;
float r = 2500;
   
void tampil(){
glClearColor(0.0, 0.0, 0.0, 0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);
glOrtho(-60.0, 60.0, -60.0, 60.0, -60.0, 60.0);
glPointSize(4);
glBegin(GL_POINTS);
         glVertex2f(0, 50);
         glVertex2f(0, -50);
         glVertex2f(50, 0);
         glVertex2f(-50, 0);
      

   do{
      
         glBegin(GL_POINTS);
         glVertex2f(a, b);
         glVertex2f(a, -b);
         glVertex2f(-a, b);
         glVertex2f(-a, -b);         
                
         b=b-0.001;
         a=sqrt(r-(b*b));
         r==((a*a)+(b*b));
        
        }while(b>0);

glEnd();
glFlush();

}

int main(int argc, char *argv[]){

    printf("Membuat lingkaran");
    glutCreateWindow("LINGKARAN");
    glutDisplayFunc(tampil);
    glutMainLoop();

    system("PAUSE");
    return EXIT_SUCCESS;
    }
