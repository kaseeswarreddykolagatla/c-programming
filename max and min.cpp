#include<stdio.h>
int max(int a,int b);
int min(int a,int b);

int main(){
    int a=10,b=20;
    max(a,b);
    min(a,b);
}
int max(int a,int b){
    if(a>b){
        printf("Max=%d\n",a);
}
else{
    printf("Max=%d\n",b);
}
}
int min(int a,int b){
    if(a<b){
        printf("Min=%d\n",a);
        
    }
    else{
        printf("Min=%d\n",b);
    }
}
