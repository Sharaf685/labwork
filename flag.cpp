#include<GL/glut.h>

void init(){
  //display window color
  glClearColor(0.0, 0.0, 0.0, 0.0);
  //projection parameter
  glMatrixMode(GL_PROJECTION);
  //2D transformation
  gluOrtho2D(0.0, 1200, 0.0, 1200);
}

void home(){

  //ROOF of HOUSE
  glClear(GL_COLOR_BUFFER_BIT);

  //set roof color
  glColor3f(0.0, 1.0, 0.0);
  glBegin(GL_POLYGON);
  glVertex2f(200, 800);

  glVertex2f(1000, 800);
   glVertex2f(1000, 400);

      glVertex2f(200,400);



  glEnd();

glColor3f(1.0, 0.0, 0.0);
  glBegin(GL_POLYGON);
  glVertex2i(600, 700);
  glVertex2i(656.8, 680.2);
  glVertex2i(695.6, 647.0);
  glVertex2i(700, 600);

  glVertex2i(682.3, 538.3);
  glVertex2i(656.4, 514.0);
  glVertex2i(600, 500);
  glVertex2i(533.8, 515.1);


  glVertex2i(501.6, 549.4);
  glVertex2i(487.2, 601.5);
  glVertex2i(500.5, 653.6);
  glVertex2i(542.6, 691.3);

  glEnd();


  glFlush();
}

int main(int argc, char ** argv){
  //Initialize glut
  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowPosition(100, 100);

  glutInitWindowSize(800, 600);

  glutCreateWindow("2D House in OpenGL");


  init();
  glutDisplayFunc(home);

  glutMainLoop();

}
