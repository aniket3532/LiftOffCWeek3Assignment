#include<stdio.h>

int lcm(int m,int n){
  if (n==0){
    return m ;
  }
  else {
    return lcm(n, m%n);
  }
}
int main(){
   int a,b; 
   printf("Enter two numbers whose gcd u wanna know:");
   scanf("%d %d", &a,&b);
   printf("GCD of %d and %d is %d", a,b,lcm(a,b));
}