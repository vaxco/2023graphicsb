#include <GL/glut.h>
float angle=0;
void myCube() ///��禡
{
    glPushMatrix();
        glScalef(0.5,0.2,0.2);///�դj�p
        glutSolidCube(1);  ///�����
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,1); ///�զ⪺
    glutSolidCube(1); ///����

    glPushMatrix();
        glTranslatef(0.5,0.5,0); ///���k�W��
        glRotatef(angle,0,0,1);  ///�०
        glTranslatef(0.25,0,0);  ///���k����0.25 �����`�b������
        glColor3f(0,1,0);  ///��⪺
        myCube();  ///�禡
    glPopMatrix();

     glPushMatrix();
        glTranslatef(-0.5,0.5,0); ///��쥪�W��
        glRotatef(angle,0,0,1);   ///�०
        glTranslatef(0.25,0,0);   ///���k����0.25 �����`�b������
        glColor3f(0,1,0);   ///��⪺
        myCube();   ///�禡
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
