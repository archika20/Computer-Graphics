#include<GL/glut.h>
#include<GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(-100.0,100,-100.0,100);
}

void setLine(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(3.0);
  glBegin(GL_LINES);
  glColor3f(1.0,0.0,0.0);
  glVertex2i(2,2);
  glVertex2i(9,9);
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitWindowPosition(20,20);
  glutInitWindowSize(500,500);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutCreateWindow("LINE");
  init();
  glutDisplayFunc(setLine);
  glutMainLoop();
  return 0:
}
