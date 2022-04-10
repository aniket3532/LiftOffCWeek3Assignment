#include<stdio.h>
float Lgelement(int n, float arr[n]){
       for(int j=0; j<n; j++){
           if(arr[0]<arr[j+1]){
               arr[0]=arr[j+1];
           }
       }
       return (arr[0]);
}

int main(){
    int n;
    float arr1[n];
    printf("Enter the no. of elements you want to add to an array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(int i=0; i<n; i++){
        scanf("%f", &arr1[i]);
    }
    printf("The largest element is %0.2f", Lgelement(n, arr1));
    return 0;
    
}