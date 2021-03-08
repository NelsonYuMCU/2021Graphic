#include <GL/glut.h>///使用GLUT外掛

void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空
    glColor3ub(181,242,148);
    glBegin(GL_TRIANGLES);
        glVertex2f((149-150)/150.0,-(116-150)/150.0);
        glVertex2f((189-150)/150.0,-(116-150)/150.0);
        glVertex2f((176-150)/150.0,-(144-150)/150.0);

    glEnd();
    glutSwapBuffers();///交換兩倍的Buffers
}

int main(int argc, char *argv[])///以前是int main
{
    glutInit(&argc, argv);///GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///顯示模式

    glutCreateWindow("08161035");///開啟視窗

    glutDisplayFunc(display);///等一下要顯示的函式
    glutMainLoop();///主要迴圈

}
