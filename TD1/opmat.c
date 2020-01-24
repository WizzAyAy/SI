// gcc opmat.c -c
#include "opmat.h"


GLfloat * mxv(GLfloat * m, GLfloat * v) 
{

  GLfloat * res = (GLfloat *)malloc(sizeof(GLfloat) * 16);

  res[0] = m[0]*v[0] + m[4]*v[1] + m[8]*v[2] + m[12]*v[3];
  res[1] = m[1]*v[0] + m[5]*v[1] + m[9]*v[2] + m[13]*v[3];
  res[2] = m[2]*v[0] + m[6]*v[1] + m[10]*v[2] + m[14]*v[3];
  res[3] = m[3]*v[0] + m[7]*v[1] + m[11]*v[2] + m[15]*v[3];

  return res;
}

GLfloat * mxm(GLfloat * m1, GLfloat * m2) 
{

  GLfloat * res = (GLfloat *)malloc(sizeof(GLfloat) * 16);

  res[0] = m1[0]*m2[0] + m1[4]*m2[1] + m1[8]*m2[2] + m1[12]*m2[3];
  res[1] = m1[1]*m2[0] + m1[5]*m2[1] + m1[9]*m2[2] + m1[13]*m2[3];
  res[2] = m1[2]*m2[0] + m1[6]*m2[1] + m1[10]*m2[2] + m1[14]*m2[3];
  res[3] = m1[3]*m2[0] + m1[7]*m2[1] + m1[11]*m2[2] + m1[15]*m2[3];

  res[4] = m1[0]*m2[4] + m1[4]*m2[5] + m1[8]*m2[6] + m1[12]*m2[7];
  res[5] = m1[1]*m2[4] + m1[5]*m2[5] + m1[9]*m2[6] + m1[13]*m2[7];
  res[6] = m1[2]*m2[4] + m1[6]*m2[5] + m1[10]*m2[6] + m1[14]*m2[7];
  res[7] = m1[3]*m2[4] + m1[7]*m2[5] + m1[11]*m2[6] + m1[15]*m2[7];

  res[8] = m1[0]*m2[8] + m1[4]*m2[9] + m1[8]*m2[10] + m1[12]*m2[11];
  res[9] = m1[1]*m2[8] + m1[5]*m2[9] + m1[9]*m2[10] + m1[13]*m2[11];
  res[10] = m1[2]*m2[8] + m1[6]*m2[9] + m1[10]*m2[10] + m1[14]*m2[11];
  res[11] = m1[3]*m2[8] + m1[7]*m2[9] + m1[11]*m2[10] + m1[15]*m2[11];

  res[12] = m1[0]*m2[12] + m1[4]*m2[13] + m1[8]*m2[14] + m1[12]*m2[15];
  res[13] = m1[1]*m2[12] + m1[5]*m2[13] + m1[9]*m2[14] + m1[13]*m2[15];
  res[14] = m1[2]*m2[12] + m1[6]*m2[13] + m1[10]*m2[14] + m1[14]*m2[15];
  res[15] = m1[3]*m2[12] + m1[7]*m2[13] + m1[11]*m2[14] + m1[15]*m2[15];

  return res;
}

void pretty_printer(GLfloat *m) 
{
  printf("%f %f %f %f\n", (float)m[0], (float)m[4], (float)m[8], (float)m[12]);
  printf("%f %f %f %f\n", (float)m[1], (float)m[5], (float)m[9], (float)m[13]);
  printf("%f %f %f %f\n", (float)m[2], (float)m[6], (float)m[10], (float)m[14]);
  printf("%f %f %f %f\n", (float)m[3], (float)m[7], (float)m[11], (float)m[15]);
}

GLfloat * identite() 
{

  // a_11 a_12 a_13 a_14
  // a_21 a_22 a_23 a_24
  // a_31 a_32 a_33 a_34
  // a_41 a_42 a_43 a_44

  GLfloat * res = (GLfloat *)malloc(sizeof(GLfloat) * 16);

  res[0] = (GLfloat)1.0f; // a_11
  res[1] = (GLfloat)0.0f; // a_21
  res[2] = (GLfloat)0.0f; // a_31
  res[3] = (GLfloat)0.0f; // a_41
  
  res[4] = (GLfloat)0.0f; // a_12
  res[5] = (GLfloat)1.0f; // a_22
  res[6] = (GLfloat)0.0f; // a_32
  res[7] = (GLfloat)0.0f; // a_42
  
  res[8] = (GLfloat)0.0f; // a_13
  res[9] = (GLfloat)0.0f; // a_23
  res[10] = (GLfloat)1.0f; // a_33
  res[11] = (GLfloat)0.0f; // a_43
  
  res[12] = (GLfloat)0.0f; // a_14
  res[13] = (GLfloat)0.0f; // a_24
  res[14] = (GLfloat)0.0f; // a_34
  res[15] = (GLfloat)1.0f; // a_44

  return res;
}


