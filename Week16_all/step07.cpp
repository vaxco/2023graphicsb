#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel * gundam = NULL;
float teapotX = 0, teapotY = 0, angle = 0, oldX = 0, oldY = 0;
void mouse(int button, int state, int x, int y) {
    oldX = x;
    oldY = y;
}
void motion(int x, int y) {
    teapotX = (x-150)/150.0;
    teapotY = (150-y)/150.0;
    angle += x - oldX;
    oldX = x;
    glutPostRedisplay();
    printf("  glTranslatef( %.2f, %.2f, 0 ); \n", teapotX, teapotY );
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        glColor3f(1,0,0);
        glScalef(0.04, 0.04, 0.04);
        glmDraw(gundam, GLM_MATERIAL);
    glPopMatrix();

    glColor3f(0,1,0);
    glutSolidTeapot( 0.02 );

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week16");

    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMouseFunc(mouse);

    gundam = glmReadOBJ("model/Gundam.obj");

    glutMainLoop();
}
