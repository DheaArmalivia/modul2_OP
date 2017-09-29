#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void square()
{
	glLineWidth(10);
	glBegin(GL_LINE_LOOP);
	glColor3f(1, 0, 0);
	glVertex3f(-100, 100, 0); //kiri
	glVertex3f(100, 100, 0); //kanan
	glVertex3f(100, -100, 0); //kanan bawah
	glVertex3f(-100, -100, 0); // kiri bawah
	glEnd();
}

void triangle()
{
	glLineWidth(10); glBegin(GL_LINE_STRIP); //kiri
	glColor3f(0, 0, 1);
	glVertex3f(-100, 100, 0);
	glVertex3f(-200, 0, 0);
	glVertex3f(-100, 0, 0);
	glEnd();
	glBegin(GL_LINE_STRIP); //atas
	glVertex3f(100, 100, 0);
	glVertex3f(0, 200, 0);
	glVertex3f(0, 100, 0);
	glEnd();
	glBegin(GL_LINE_STRIP); //kanan
	glVertex3f(100, -100, 0);
	glVertex3f(200, 0, 0);
	glVertex3f(100, 0, 0);
	glEnd();
	glBegin(GL_LINE_STRIP); //bawah
	glVertex3f(-100, -100, 0);
	glVertex3f(0, -200, 0);
	glVertex3f(0, -100, 0);
	glEnd();
}

void gambar()
{
	//glPointSize(50);
	glLineWidth(10);
	//glBegin(GL_POINTS);
	//glBegin(GL_LINES);
	//glBegin(GL_LINE_STRIP);
	glBegin(GL_LINE_LOOP);
	/*glColor3f(1, 0, 1);*/
	//glColor3f(0, 0, 0); no. 1
	//glColor3f(0, 0, 1); no. 2 
	//glColor3f(0, 1, 0); no. 3
	//glColor3f(0, 1, 1); no. 4
	//glColor3f(1, 0, 0); no. 5
	//glColor3f(1, 0, 1); no. 6
	//glColor3f(1, 1, 0); no. 7
	glColor3f(1, 1, 1);
	glVertex3f(-100, 200, 0); //kiri atas
	glVertex3f(100, 200, 0); //kanan atas
	glVertex3f(200, 0, 0); //kanan tengah
	glVertex3f(100, -200, 0); //kanan bawah
	glVertex3f(-100, -200, 0); //kiri bawah
	glVertex3f(-200, 0, 0); //kiri tengah
	glEnd();
}

void render()
{
	/*glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();*/
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//gambar();
	square();
	triangle();
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

