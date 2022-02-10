/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>//standard input output header

int main()//main function begin programm 
{
  float amount, distance;//declaration of variables

  printf("enter the distance the van has travelled :");//display the distance

  if(distance < 30)
  {
    amount = distance*50;//amount calculate
  }

  else

  {
    amount = distance *50 + (50 - 30)*40;//amount calculate
  }

  printf("full amount is : %.2f", amount)//display full amount

  return 0;
}//emd of the main function
