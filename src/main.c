#include <stdio.h> 

double add(double a, double b){
  return a + b; 
}

double getMax(double a, double b){
  return (a > b) ? a : b; 
}

double subtract(double a, double b){
return a - b; 

}

int main(void){
  int a = 10 ; 
  int b = 20; 
  printf("Hello Team"); 
  printf("Sum = %d \n", add(a,b)); 
  printf("Max = %d \n", getMax(a,b));
  printf("Subtraction = %f", subtract(a,b));
return 0; 
}



 
