#include<stdio.h>
void swap(int a,int b){
    int c = b;
    b = a;
    a = c;
    printf("%d %d", a, b);
}

int main(){
    int x,y;
    printf("Enter two numbers to swap:");
    scanf("%d %d", &x, &y);
    swap(x,y);    
}