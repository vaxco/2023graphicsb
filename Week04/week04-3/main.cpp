#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix(); ///�ƥ��x�}
        glTranslatef(0.5,0,0); ///����k��
        glRotatef(angle,0,1,0);///���त��
        glColor3f(0,0,1); ///�Ŧ�
        glutSolidTeapot( 0.3 ); ///����
    glPopMatrix();

    glPushMatrix(); ///�ƥ��x�}
        glRotatef(angle,0,1,0);///����k��
        glTranslatef(0.5,0,0);///���त��
        glColor3f(1,1,0);   ///����
        glTranslatef(0,0.5,0); ///���W����
        glutSolidTeapot( 0.3 );///����
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
