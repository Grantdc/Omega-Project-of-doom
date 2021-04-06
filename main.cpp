#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "glut.h"
#include <time.h>

void timerFunction(int value)
{

	glutPostRedisplay();
	glutTimerFunc(33, timerFunction, 1);
}

void renderScene()
{
	glutSwapBuffers();
}

void setupRC(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

int main()
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("The Legend of Scrip");
	glutDisplayFunc(renderScene);
	glutTimerFunc(33, timerFunction, 1);

	setupRC();
	glutMainLoop();
}