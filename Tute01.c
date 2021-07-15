/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total=0;//variable declaration
  float average;

  printf("Input mark 1-");//getting marks for subject 1
  scanf("%d",&mark1);

  printf("Input mark 2-");//getting marks for subject 2
  scanf("%d",&mark2);

  total=mark1 + mark2;//calculating the total
  average=total/2.0;//calculating the average

  printf("The average is %.2f",average);//display the average
  return 0;//end of program
}

