#include <GL/glut.h>
float angle=0;
void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);
        glutSolidCube(1);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(-0.25,0,0);///(3)�⥿�T��ʪ����u�A���b�ӤW
        glRotatef(angle,0,0,1);///(2)���
        glTranslatef(-0.25,0,0);///(1)�N���त��,��b������
        hand();
        glPushMatrix();
            glTranslatef(-0.25,0,0);///(3)�⥿�T��ʪ����u�A���b�ӤW
            glRotatef(angle,0,0,1);///(2)���
            glTranslatef(-0.25,0,0);///(1)�N���त��,��b������
            hand();///�W���u
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(+0.25,0,0);///(3)�⥿�T��ʪ����u�A���b�ӤW
        glRotatef(-angle,0,0,1);///(2)���
        glTranslatef(+0.25,0,0);///(1)�N���त��,��b������
        hand();
        glPushMatrix();
            glTranslatef(+0.25,0,0);///(3)�⥿�T��ʪ����u�A���b�ӤW
            glRotatef(-angle,0,0,1);///(2)���
            glTranslatef(+0.25,0,0);///(1)�N���त��,��b������
            hand();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08161035");///(3)�}��
    glutIdleFunc(display);///TODO2:idle�ܶ����ɭԴN���e��
    glutDisplayFunc(display);
    glutMainLoop();
}
