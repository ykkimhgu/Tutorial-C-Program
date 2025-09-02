/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : 코딩 도장
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_structure_exercise.c
-------------------------------------------------------------------------------*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int grade;
  int class;
  float average;
} Student;

int main() {
  Student student_1004;

  student_1004.grade = 3;
  // YOUR CODE GOES HERE
  //_____________________
  //_____________________
  
  printf("grade: %d\n", student_1004.grade);
  printf("class: %d\n", student_1004.class);
  printf("average: %f\n", student_1004.average);

  printf("\n------In Pointer------\n\n");
  
  // YOUR CODE GOES HERE
  //Student *s1 = _____________________
  printf("grade: %d\n", s1->grade);
  printf("class: %d\n", s1->class);
  printf("average: %f\n", s1->average);

  return 0;
}
