#include<stdio.h>
void evod(int n){
   if(n%2==0){
       printf("%d is even", n);
   }
   else {
       printf("%d is odd", n);
   }
}

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    evod(a);
    return 0;
}