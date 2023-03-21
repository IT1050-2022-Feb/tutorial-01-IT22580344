/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float s1,s2,avg;
  printf("Enter Subject 01 Marks: ");
  scanf("%f",&s1);
  printf("Enter Subject 02 Marks: ");
  scanf("%f",&s2);

  avg = (s1+s2)/2.0;
  printf("Average is : %f",avg);
  return 0;
}

