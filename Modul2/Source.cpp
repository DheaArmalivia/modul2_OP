#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void gambar()
{
	glPointSize(50);
	glBegin(GL_LINES);
	/*glColor3f(1, 0, 1);*/
	//glColor3f(0, 0, 0); no. 1
	//glColor3f(0, 0, 1); no. 2 
	//glColor3f(0, 1, 0); no. 3
	//glColor3f(0, 1, 1); no. 4
	//glColor3f(1, 0, 0); no. 5
	//glColor3f(1, 0, 1); no. 6
	//glColor3f(1, 1, 0); no. 7
	glColor3f(1, 1, 1);
	glVertex3f(200, 200, 0);
	glVertex3f(200, -200, 0);
	glVertex3f(-200, -200, 0);
	glVertex3f(-200, 200, 0);
	glEnd();
}

void render()
{
	/*glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();*/
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	gambar();
	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("XIIRPL4-06-Dhea Armalivia Airizah");
	gluOrtho2D(-400, 400, -300, 300);
	glClearColor(0, 0, 0, 0);
	glutDisplayFunc(render);

	glutMainLoop();
	return 0;
}

