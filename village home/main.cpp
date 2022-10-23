#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
double  r=.2,s=.3;
int i;
float  tx=10,bx=10;


void init()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glOrtho(-210,210,-220,310,-210,310);

}


void cloud(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*r;
            y=y+sin((i*3.14)/180)*r;

            glVertex2d(x,y);

        }


    glEnd();



}
void sun(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*s;
            y=y+sin((i*3.14)/180)*s;

            glVertex2d(x,y);

        }


    glEnd();



}

void fence(int x)
{
    glBegin(GL_POLYGON);
        glColor3ub(205,133,63);

        glVertex2i(190-x,130);
        glVertex2i(190-x,70);
        glVertex2i(187-x,70);
        glVertex2i(187-x,130);
        glVertex2i(190-x,130);



    glEnd();

}






void display()
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub(105,105,105);
        glRecti(-200,300,200,100);

    glBegin(GL_POLYGON);
        glColor3ub(184,134,11);

        glVertex2i(-200,-100);
        glVertex2i(-100,-160);
        glVertex2i(0,-100);
        glVertex2i(50,-70);
        glVertex2i(100,-180);
        glVertex2i(200,-100);
        glColor3ub(255,215,0);
        glVertex2i(200,200);

        glVertex2i(-200,200);
        glColor3ub(255,215,0);
        glVertex2i(-200,100);

    glEnd();


    glColor3ub(255,255,255);
    sun(90,250);

    int x=0;
    for(int i=0;i<39;i++)
    {
        fence(x);
        x+=10;
    }

    glColor3ub(184,134,11);
    glRecti(-200,120,200,115);
    glRecti(-200,100,200,95);
    glRecti(-200,85,200,80);



    glColor3ub(128,0,0);
    glRecti(-20,200,-13,140);
    glColor3ub(0,100,0);
    sun(-30,190);
    sun(0,190);
    sun(-10,210);
    sun(-30,175);
    sun(-0,170);
    glBegin(GL_POLYGON);
        glColor3ub(128,0,0);
        glVertex2i(-170,160);

        glColor3ub(128,0,0);
        glVertex2i(-178,40);
        glVertex2i(-145,40);
        glColor3ub(128,0,0);
        glVertex2i(-153,120);
        glVertex2i(-150,160);
        glVertex2i(-170,160);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(128,0,0);
        glVertex2i(-170,160);
        glVertex2i(-185,210);
        glVertex2i(-190,210);
        glVertex2i(-168,90);
        glVertex2i(-170,160);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(128,0,0);
        glVertex2i(-160,160);
        glVertex2i(-150,210);
        glVertex2i(-140,210);
        glVertex2i(-150,160);
        glVertex2i(-160,160);


    glEnd();
    glColor3ub(34,139,34);
        sun(-95,200);
        sun(-80,180);
        sun(-110,180);
        sun(-120,200);

        sun(-150,200);
        sun(-130,180);
        sun(-125,220);
        sun(-140,230);

        sun(-190,210);
        sun(-180,200);
        sun(-175,225);
        sun(-195,190);




    glBegin(GL_POLYGON);

        glColor3ub(0,100,0);
        glVertex2i(115,65);
        glVertex2i(95,5);
        glVertex2i(145,5);
        glVertex2i(165,65);
        glVertex2i(115,65);

    glEnd();
    glBegin(GL_POLYGON);

        glColor3ub(143,188,143);
        glVertex2i(120,58);
        glVertex2i(104,13);
        glVertex2i(140,12);
        glVertex2i(155,58);
        glVertex2i(120,58);

    glEnd();
    glColor3ub(0,0,0);
        glRecti(95,5,145,-6);

    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(165,65);
        glVertex2i(166,55);
        glVertex2i(145,-6);
        glVertex2i(145,5);
        glVertex2i(165,65);
    glEnd();



    glBegin(GL_POLYGON);
        glColor3ub(47,79,79);
        glVertex2i(-58,115);
        glVertex2i(-75,145);
        glVertex2i(-115,150);
        glVertex2i(-90,100);
        glVertex2i(-62,100);
        glVertex2i(-58,115);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(102,205,170);
        glVertex2i(-115,150);
        glVertex2i(-130,100);
        glVertex2i(-120,100);
        glVertex2i(-108,137);
        glVertex2i(-115,150);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(46,139,87);
        glVertex2i(-108,137);
        glVertex2i(-120,100);
        glVertex2i(-120,45);
        glVertex2i(-90,40);
        glVertex2i(-90,100);
        glVertex2i(-108,137);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(143,188,143);
        glVertex2i(-90,40);
        glVertex2i(-60,45);
        glVertex2i(-60,100);
        glVertex2i(-90,100);

    glEnd();
    glColor3ub(0,0,0);
        glRecti(-75,80,-65,40);
    glColor3ub(0,0,0);
        glRecti(-110,90,-100,70);
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-90,40);
        glVertex2i(-123,45);
        glVertex2i(-123,35);
        glVertex2i(-90,30);
        glVertex2i(-90,40);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-90,40);
        glVertex2i(-55,45);
        glVertex2i(-55,35);
        glVertex2i(-90,30);
        glVertex2i(-90,40);


    glEnd();





    glBegin(GL_POLYGON);

        glColor3ub(25,25,112);
        glVertex2i(-50,140);
        glVertex2i(0,149);
        glVertex2i(-12,88);
        glVertex2i(-65,89);
        glVertex2i(-50,140);
    glEnd();





    glBegin(GL_POLYGON);
    glColor3ub(70,130,180);
        glVertex2i(-60,90);
        glVertex2i(-60,30);
        glVertex2i(-10,25);
        glVertex2i(-10,95);
    glEnd();



    glColor3ub(25,25,112);
    glRecti(-45,70,-30,27);


    glBegin(GL_POLYGON);
    glColor3ub(95,158,160);
        glVertex2i(-10,25);
        glVertex2i(18,35);
        glVertex2i(18,100);
        glVertex2i(0,148);
        glVertex2i(-10,100);
        glVertex2i(-10,25);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
        glVertex2i(-1,150);
        glVertex2i(20,100);
        glVertex2i(17,90);
        glVertex2i(-4,140);
        glVertex2i(-1,150);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
        glVertex2i(0,70);
        glVertex2i(10,73);
        glVertex2i(10,32);
        glVertex2i(0,29);
        glVertex2i(0,70);


    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-10,25);
        glVertex2i(-10,15);
        glVertex2i(20,27);
        glVertex2i(20,37);
        glVertex2i(-10,25);


    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2i(-10,25);
        glVertex2i(-62,30);
        glVertex2i(-62,20);
        glVertex2i(-10,15);
        glVertex2i(-10,25);




    glEnd();




    glBegin(GL_POLYGON);
        glColor3ub(30,144,255);
        glVertex2i(-200,-50);
        glVertex2i(200,-30);
        glColor3ub(0,0,128);
        glVertex2i(200,-200);
        glVertex2i(-200,-200);
        glVertex2i(-200,-50);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(128,128,0);
        glVertex2i(-200,-45);
        glVertex2i(200,-25);
        glVertex2i(200,-30);
        glVertex2i(-200,-50 );
        glVertex2i(-200,-45);
    glEnd();


	glPushMatrix();
	glColor3ub(211,211,211);
    glTranslatef(tx,0,0);
    cloud(0,250);
    cloud(15,245);
    cloud(10,240);
    cloud(-2,243);



    cloud(-80,250);
    cloud(-95,245);
    cloud(-90,240);
    cloud(-90,243);
    cloud(-75,243);

    glPopMatrix();
    tx+=.01;
    if(tx>200)
    tx=-200;

    glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(bx,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(-180,-70);
        glVertex2i(-165,-100);
        glVertex2i(-150,-120);
        glVertex2i(-150,-100);
        glVertex2i(-180,-70);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2i(-150,-100);
        glVertex2i(-150,-120);
        glVertex2i(-120,-125);
        glVertex2i(-90,-120);
        glVertex2i(-85,-100);
        glVertex2i(-150,-100);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2i(-85,-100);
        glVertex2i(-90,-120);
        glVertex2i(-75,-105);
        glVertex2i(-60,-70);
        glVertex2i(-85,-100);
    glEnd();
    glColor3ub(211,211,211);
    sun(-165,260);
    sun(-185,245);
    sun(-180,240);
    sun(-152,243);


    glBegin(GL_POLYGON);
        glColor3ub(173,216,230);
        glVertex2i(-57,-40);
        glVertex2i(-50,-10);
        glVertex2i(-49,10);
        glVertex2i(-50,30);
        glVertex2i(-55,45);
        glVertex2i(-63,57);
        glVertex2i(-73,68);
        glVertex2i(-105,45);
        glVertex2i(-50,-10);


    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(173,216,230);

        glVertex2i(-68,-70);
        glVertex2i(-57,-40);
        glVertex2i(-85,10);
        glVertex2i(-68,-70);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(173,216,230);
        glVertex2i(-85,-100);
        glVertex2i(-68,-70);
        glVertex2i(-80,-10);
        glVertex2i(-85,-100);

    glEnd();

    glColor3ub(139,69,19);
    glRecti(-88,80,-86,-100);
    glBegin(GL_POLYGON);
        glColor3f(0.55,0.27,0.0745);
        glVertex2i(-85,-100);
        glVertex2i(-87,-80);
        glVertex2i(-93,-62);
        glVertex2i(-97,-55);
        glVertex2i(-105,-50);
        glVertex2i(-120,-48);
        glVertex2i(-120,-100);
        glVertex2i(-85,-100);

    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.55,0.27,0.0745);
        glVertex2i(-150,-100);
        glVertex2i(-148,-80);
        glVertex2i(-142,-62);
        glVertex2i(-138,-55);
        glVertex2i(-130,-50);
        glVertex2i(-115,-48);
        glVertex2i(-115,-100);
        glVertex2i(-150,-100);


    glEnd();


    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2i(-142,-62);
        glVertex2i(-73,68);
        glVertex2i(-73,63);

        glVertex2i(-142,-62);
        glVertex2i(-105,45);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2i(-148,-80);
        glVertex2i(-87,-80);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2i(-142,-62);
        glVertex2i(-93,-62);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2i(-115,-48);
        glVertex2i(-115,-100);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2i(-130,-50);
        glVertex2i(-130,-100);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2i(-100,-52);
        glVertex2i(-100,-100);
    glEnd();





    glPopMatrix();
    bx+=.03;
    if(bx>270)
    bx=-180;


    glutPostRedisplay();
    glColor3ub(255,255,255);
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);

    glFlush();
}










int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(1200,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow(" village scenery ");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
