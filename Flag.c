#include<GL/glut.h>
#include<GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(-100.0,100,-100.0,100);
}

voir setFlag(void)
{
  glClear(GLU_COLOR_BUFFER_BIT);
  glLineWidth(5.0);
  glPointSize(2.0);
  
  glBegin(GL_LINE_LOOP);
  glColor3f(1.0,1.0,0.0);
  glVertex2i(3,0);
  glVertex2i(1,3);
  glVertex2i(1,4);
  glVertex2i(2,4);
  glVertex2i(2,5);
  glVertex2i(1,5);
  glVertex2i(1,6);
  glVertex2i(6,0);
  
  
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitWindowPosition(20,20);
  glutInitWindowSize(500,200);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutCreateWindow("FLAG");
  init();
  glutDisplayFunc(setFlag);
  glutMainLoop();
  return 0;
}
