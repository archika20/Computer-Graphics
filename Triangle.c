#include<GL/glut.h>
#include<GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(-100.0,100,-100.0,100);
}

void setTriangle(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(3.0);
  glBegin(GL_LINES);       //we are making a triangle using LINES function
  glColor3f(1.0,1.0,0.0);
  glVertex2i(0,0);
  glVertex2i(10,15);
  glVertex2i(10,15);
  glVertex2i(20,0);
  glVertex2i(20,0);
  glVertex2i(0,0);
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitWindowPosition(20,20);
  glutInitWindowSize(500,500);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutCreateWindow("TRIANGLE");
  init();
  glutDisplayFunc(setTriangle);
  glutMainLoop();
  return 0:
}
