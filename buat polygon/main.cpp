#include <windows.h>

#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(4);
 glLineWidth(4);

 glColor3f(1.0,1.0,0.0);

 glBegin(GL_POLYGON);
 glVertex2f(0.0,1.0); //kiri
 glVertex2f(2.0,0.5); //atas
 glVertex2f(0.7,-1.2); //kanan atas

 glEnd();

 glFlush();
}

void myinit()
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-2.0,2.0,-2.0,2.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[])
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(300,100);
 glutCreateWindow("Segitiga Warna Kuning");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();

 return 0;
}
