
#include<windows.h>
#include<GL/glut.h>
#include<math.h>
void Environment(void);
void car(void);

void display (void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    int i;
    for(i = 0;i <= 340;i++ ){
        glClear(GL_COLOR_BUFFER_BIT);
        Environment();
        glPushMatrix();
        glTranslated(i,0,0);
        car();
        glPopMatrix();
        glEnd();
        glFlush();
        Sleep(50);
    }

}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode (GL_PROJECTION); // Set projection parameters.
    gluOrtho2D (0.0, 500.0, 0.0, 500.0);
}
void car (void)
{
// Wheel 1
    float x1,y1,x2,y2;
    float angle;
    double radius=20; // Radius

    x1 = 70,y1=70; // Center
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f; angle<361.0f; angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
// Wheel 2
    float x3,y3,x4,y4;
    float angle1;
    double radius1=20; // Radius

    x3 = 130,y3=70; // Center
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x3,y3);

    for (angle1=1.0f; angle1<361.0f; angle1+=0.2)
    {
        x4 = x3+sin(angle1)*radius1;
        y4 = y3+cos(angle1)*radius1;
        glVertex2f(x4,y4);
    }

    glEnd();
// Car Body
    glColor3f (0.1, 0.0, 0.3);
    glBegin (GL_POLYGON);
    glVertex2i (40, 80);
    glVertex2i (160, 80);
    glVertex2i (160, 140);
    glVertex2i (40, 140);
    glEnd ( );
// Car Head
    glColor3f (0.1, 0.0, 0.3);
    glBegin (GL_POLYGON);
    glVertex2i (75, 140);
    glVertex2i (125, 140);
    glVertex2i (125, 180);
    glVertex2i (75, 180);
    glEnd ( );


    glFlush ( );
}

void Environment (void)
{
    glClear (GL_COLOR_BUFFER_BIT); // Clear display window.
// First green half
    glColor3f (0.0, 0.4, 0.2);
    glBegin (GL_POLYGON);
    glVertex2i (0, 0);
    glVertex2i (500, 0);
    glVertex2i (500, 250);
    glVertex2i (0, 250);
    glEnd ( );
// Second green half
    glColor3f (0.0, 0.5, 1);
    glBegin (GL_POLYGON);
    glVertex2i (0, 250);
    glVertex2i (500, 250);
    glVertex2i (500, 500);
    glVertex2i (0, 500);
    glEnd ( );
// Road
    glColor3f (0.0, 0.0, 0.0);
    glBegin (GL_POLYGON);
    glVertex2i (0, 50);
    glVertex2i (500, 50);
    glVertex2i (500, 125);
    glVertex2i (0, 125);
    glEnd ( );
// Road line
    glColor3f (1, 1, 1);
    glBegin (GL_POLYGON);
    glVertex2i (0, 85);
    glVertex2i (500, 85);
    glVertex2i (500, 90);
    glVertex2i (0, 90);
    glEnd ( );

// First Triangle
    glColor3f (0.1, 0.1, 0.1);
    glBegin (GL_POLYGON);
    glVertex2i (0, 250);
    glVertex2i (180, 250);
    glVertex2i (83, 400);
    glEnd ( );

// Second Triangle
    glColor3f (0.1, 0.1, 0.1);
    glBegin (GL_POLYGON);
    glVertex2i (115, 240);
    glVertex2i (375, 240);
    glVertex2i (230, 390);
    glEnd ( );

// Third Triangle
    glColor3f (0.1, 0.1, 0.1);
    glBegin (GL_POLYGON);
    glVertex2i (300, 230);
    glVertex2i (575, 230);
    glVertex2i (400, 380);
    glEnd ( );

// Sun
    float x1,y1,x2,y2;
    float angle;
    double radius=40; // Radius

    x1 = 350,y1=435; // Center
    glColor3f(0.8,1.0,0.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f; angle<361.0f; angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();

   // car();

    glFlush ( );
}
int main (int argc, char** argv)
{
    glutInit (&argc, argv); // Initialize GLUT.
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // Set display mode.
    glutInitWindowPosition (50, 100); // Set top-left display-window position.
    glutInitWindowSize (400, 300); // Set display-window width and height.
    glutCreateWindow ("An Example OpenGL Program"); // Create display window.
    init ( ); // Execute initialization procedure.
    glutDisplayFunc (display); // Send graphics to display window.
    glutMainLoop ( ); // Display everything and wait.
    return 0;
}
Car Moving.txt
Displaying Car Moving.txt.