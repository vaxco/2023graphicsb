#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);
    glVertex2d( (65-100)/100.0, -(54-100)/100.0);
    glVertex2d( (34-100)/100.0, -(138-100)/100.0);
    glVertex2d( (59-100)/100.0, -(138-100)/100.0);
    glVertex2d( (87-100)/100.0, -(53-100)/100.0);
    glEnd();



	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("Week02");
	glutDisplayFunc(display);
	glutMainLoop();
}
