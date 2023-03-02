#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.44,0.49);
    glVertex2f(-0.27,0.64);
    glVertex2f(0.09,0.71);
    glVertex2f(0.44,0.61);
    glVertex2f(0.51,0.34);
    glVertex2f(0.50,0.01);
    glVertex2f(0.26,-0.30);
    glVertex2f(-0.09,-0.40);
    glVertex2f(-0.47,-0.26);
    glVertex2f(-0.60,0.00);
    glVertex2f(-0.70,0.49);
    glVertex2f(-0.61,0.66);

    glEnd();
    glPushMatrix();

    glutSwapBuffers();
}
void mouse(int buttom,int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
    if(state==GLUT_DOWN) printf("    glVertex2f(%.2f,%.2f);\n",X,Y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

    glutMouseFunc(mouse);
    glutDisplayFunc(display);

    glutMainLoop();
}
