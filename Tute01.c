/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1, sub2;//declaration variable
  float avg = 0;//initialization of average

  printf("enter the marks of subject 1 :");//prompt
  scanf("%d", &sub1);//read sub1 marks

  printf("enter the marks of subject 2 :");//prompt
  scanf("%d",&sub2);//read sub2 marks

  avg = (sub1 + sub2)/2.0;//calculate average

  printf("average of subjects %.2f, avg");//display the average
  
  return 0;
}//end of main function

