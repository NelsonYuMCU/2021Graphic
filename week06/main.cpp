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
        glTranslatef(-0.25,0,0);///(3)把正確轉動的手臂，掛在肩上
        glRotatef(angle,0,0,1);///(2)轉動
        glTranslatef(-0.25,0,0);///(1)將旋轉中心,放在正中心
        hand();
        glPushMatrix();
            glTranslatef(-0.25,0,0);///(3)把正確轉動的手臂，掛在肩上
            glRotatef(angle,0,0,1);///(2)轉動
            glTranslatef(-0.25,0,0);///(1)將旋轉中心,放在正中心
            hand();///上手臂
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(+0.25,0,0);///(3)把正確轉動的手臂，掛在肩上
        glRotatef(-angle,0,0,1);///(2)轉動
        glTranslatef(+0.25,0,0);///(1)將旋轉中心,放在正中心
        hand();
        glPushMatrix();
            glTranslatef(+0.25,0,0);///(3)把正確轉動的手臂，掛在肩上
            glRotatef(-angle,0,0,1);///(2)轉動
            glTranslatef(+0.25,0,0);///(1)將旋轉中心,放在正中心
            hand();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08161035");///(3)開窗
    glutIdleFunc(display);///TODO2:idle很閒的時候就重畫面
    glutDisplayFunc(display);
    glutMainLoop();
}
