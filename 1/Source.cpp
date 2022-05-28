#include <GL/freeglut.h>

static void RenderSceneCB()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

static void InitializeGlutCallbacks()
{
	glutDisplayFunc(RenderSceneCB);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); //инициализируем GLUT
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // настраиваем некоторые опции GLUT

	/*Задаём параметры окна*/
	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial 01");

	glutDisplayFunc(RenderSceneCB); //присоединяем функцию RenderSceneCB к GLUT

	glClearColor(1.0f, 1.0f, 0.0f, 0.0f); //устанавливаем цвет, который будет использован во время очистки буфера кадра
	glutMainLoop(); //передаём контроль GLUT'у

	glClear(GL_COLOR_BUFFER_BIT); //очищаем буфер кадра
	glutSwapBuffers(); //меняем фоновый буфер и буфер кадра местами

	return 0;
}