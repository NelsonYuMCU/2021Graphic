#include <GL/glut.h>
#include <stdio.h>
float vx[2000],vy[2000];///準備一堆頂點,等一下要畫
int N=0;///有N個頂點
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++)
    {
        glVertex2f(vx[i],vy[i]);
    }
    glEnd();
    glutSwapBuffers();
}
void mouse(int buttin,int state,int x,int y)
{
}
void motion(int x,int y)
{
    printf("%d %d\n",x,y);///把頂點記起來
    vx[N]=(x-150)/150.0;
    vy[N]=-(y-150)/150.0;
    N++;
    display();
}           ///減一半再除一半,y加負號
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week05");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
}
