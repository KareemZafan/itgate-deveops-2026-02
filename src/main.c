#include <stdio.h> 

double add(double a, double b){
  return a + b; 
}

double getMax(double a, double b){
  return (a > b) ? a : b; 
}


int main(void){
  int a = 10 ; 
  int b = 20; 

  printf("Sum = %d \n", add(a,b)); 
  printf("Max = %d \n", getMax(a,b));

return 0; 
}



 