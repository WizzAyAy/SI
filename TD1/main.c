// gcc main.c actions.o axes.o init.o lumiere.o switch_blend.o  switch_light.o VM_init.o -lm -lGL -lGLU -lglut -o test

#include "init.h"
#include "axes.h"
#include "VM_init.h"
#include <math.h>
#include "opmat.h"
//rouge = 1
// vert = 2
// bleu = 3 

GLfloat xrot = 0.0f;   
GLfloat yrot = 0.0f;   
GLfloat z = -5.0f; 

GLvoid Modelisation()
{
  VM_init();

  // Entre glPushMatrix et glPopMatrix s'écrit la description de la scène.

	glPushMatrix();{
		
		glPushMatrix();
		glScalef(5,0.2,2);
		glTranslatef(0,0,0.05);
		glutSolidCube(0.5);
		glPopMatrix();
		
		glPushMatrix();
		glScalef(1,0.2,0.3);
		glTranslatef(1.4,0,1.4);
			glScalef(0.9,1,1);
			glPushMatrix();
				glRotatef(15,0,0,1);
				glutSolidCube(0.5);
			glPopMatrix();
		glTranslatef(0.6,0,0);
			glScalef(0.8,1,1);
			glPushMatrix();
				glRotatef(15,0,0,1);
				glutSolidCube(0.5);
			glPopMatrix();
		glTranslatef(0.6,0,0);
			glScalef(0.7,1,1);
			glPushMatrix();
				glRotatef(15,0,0,1);
				glutSolidCube(0.5);
			glPopMatrix();
		glPopMatrix();
		
		glPushMatrix();
		glScalef(1.2,0.2,0.3);
		glTranslatef(1.2,0,0.7);
			glScalef(0.9,1,1);
			glutSolidCube(0.5);
		glTranslatef(0.6,0,0);
			glScalef(0.8,1,1);
			glutSolidCube(0.5);
		glTranslatef(0.6,0,0);
			glScalef(0.7,1,1);
			glutSolidCube(0.5);
		glPopMatrix();
		
		glPushMatrix();
		glScalef(1.3,0.2,0.3);
		glTranslatef(1.1,0,0);
			glScalef(0.9,1,1);
			glutSolidCube(0.5);
		glTranslatef(0.6,0,0);
			glScalef(0.8,1,1);
			glutSolidCube(0.5);
		glTranslatef(0.6,0,0);
			glScalef(0.7,1,1);
			glutSolidCube(0.5);
		glPopMatrix();
		
		glPushMatrix();
		glScalef(1.2,0.2,0.3);
		glTranslatef(1.2,0,-0.7);
			glScalef(0.9,1,1);
			glutSolidCube(0.5);
		glTranslatef(0.6,0,0);
			glScalef(0.8,1,1);
			glutSolidCube(0.5);
		glTranslatef(0.6,0,0);
			glScalef(0.7,1,1);
			glutSolidCube(0.5);
		glPopMatrix();
		
		
	}
	glPopMatrix();

  axes();
  glutSwapBuffers();
}

int main(int argc, char **argv) 
{  
  return notre_init(argc, argv, &Modelisation);
}
