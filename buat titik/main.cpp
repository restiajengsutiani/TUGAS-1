#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glPointSize(20);
    glBegin(GL_POINTS);

    glColor3f(0.0, 0.5, 0.0);       //Warna Hijau Tua
    glVertex3f(0.5, 0.10, 0.0);
    glColor3f(0.0, 0.5, 1.0);       //Warna biru muda
    glVertex3f(0.3, 0.10, 0.0);
    glColor3f(1.0, 1.0, 0.0);       //Warna Kuning
    glVertex3f(0.70, 0.10, 0.5);
    glColor3f(0.5, 1, 0.0);       //Warna Hijau Stabilo
    glVertex3f(0.5, 0.5, 0.0);
    glColor3f(0.5, 0.5, 1.0);       //Warna Ungu Kebiruan
    glVertex3f(0.10, 0.10, 0.5);
    glColor3f(2.0, 0.5, 1.0);       //Warna Ungu Stabilo
    glVertex3f(0.90, 0.10, 0.5);

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(400, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
    }
