#include<GL/glut.h>
#include<GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(-100.0,100,-100.0,100);
}

void setDDA(void)
{
  int x1,y1,x2,y2,i,length=0;
  x1=y1=0;
  x2=y2=10;
  int dx=x2-x1;
  int dy=y2-y1;
  
  if(abs(dx)>=abs(dy))
     length=dx;
  else
     length=dy;
     
  int xinc=dx/length;
  int yinc=dy/length;
        
  glClear(GL_COLOR_BUFFER_BIT);
  glPointSize(2.0);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,0.0);
  glVertex2i(x1,y1);
  
  x2=x1;
  y2=y1;
  
  for(i=0;i<length;i++)
  {
     x2=x2+xinc;
     y2=y2+yinc;
     glVertex2i(x2,y2);
  }
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitWindowPosition(20,20);
  glutInitWindowSize(200,200);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutCreateWindow("LINE");
  init();
  glutDisplayFunc(setDDA);
  glutMainLoop();
  return 0;
} 
