#include <stdio.h>
#include <stdlib.h>
#define n 10
int main(){
int arr[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int temp;
for(int i = 0; i<n/2; i++){
temp = arr[i];
arr[i] = arr[n-i-1];
arr[n-i-1] = temp;
}
for(int i = 0; i < n; i++){
printf("%d,", arr[i]);
}
}

