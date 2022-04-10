#include<stdio.h>
int prime(int n, int i){
    if(i==1){
        return 0;
    }
    else {
        if(n%i==0){
            return 1;
        }
        else {
            return (prime(n,i-1));
        }
    }
        
}    
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int re = prime(a,a/2);
    if(a==1){
        printf("%d is not prime", a);
    }
    else if(re==1){
        printf("%d is not prime", a);
    }
    else {
        printf("%d is prime", a);
    }
    return 0;
}