/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//srandard input output header
int main() {

int i, no, sum = 0;//declaration and initialization variable

printf("enter the no of numbers:");//prompt

scanf("%d", &no);//read the no

for(i = 1; i<=no; i++)
{
  sum = sum += i;//calculate sum

}

printf("sum of numbers: %d", sum);//display the sum of numbers
  
  return 0;
}//end of the main function

