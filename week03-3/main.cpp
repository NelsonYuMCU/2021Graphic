#include <GL/glut.h>///�ϥ�GLUT�~��

void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M��
    glColor3ub(181,242,148);
    glBegin(GL_TRIANGLES);
        glVertex2f((149-150)/150.0,-(116-150)/150.0);
        glVertex2f((189-150)/150.0,-(116-150)/150.0);
        glVertex2f((176-150)/150.0,-(144-150)/150.0);

    glEnd();
    glutSwapBuffers();///�洫�⭿��Buffers
}

int main(int argc, char *argv[])///�H�e�Oint main
{
    glutInit(&argc, argv);///GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///��ܼҦ�

    glutCreateWindow("08161035");///�}�ҵ���

    glutDisplayFunc(display);///���@�U�n��ܪ��禡
    glutMainLoop();///�D�n�j��

}
