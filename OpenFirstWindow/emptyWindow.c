#include <GL/glut.h>


void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}

int main(int argc, char **argv){
	
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutCreateWindow("this is my empty window");
	glutDisplayFunc(display);
    glutMainLoop();
    return(0);
}
