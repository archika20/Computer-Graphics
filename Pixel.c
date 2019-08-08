
//<filename>.c -lglu -lgl -lGLUT
#include<GL/glut.h>
#include<GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(-100.0,100,-100.0,100);
}

void setPixel(void)
{
  int x1=0,y1=0,x,y,r=20,i;
  glClear(GL_COLOR_BUFFER_BIT);
  glPointSize(2.0);
  glBegin(GL_POINTS);
  glColor3f(1.0,0.0,0.0);
  glVertex2i(2,2);
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitWindowPosition(20,20);
  glutInitWindowSize(500,500);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutCreateWindow("PIXEL");
  init();
  glutDisplayFunc(setPixel);
  glutMainLoop();
  return 0:
}
