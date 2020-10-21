//Fibonacci Series using Recursion 
#include<stdio.h> 
int fib(int n) 
{ 
   if (n <= 1) 
      return n; 
   return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
  int n;
  printf("Enter a num: "); 
  scanf("%d", &n);
  printf("%d\n", fib(n)); 
  getchar(); 
  return 0; 
} 
