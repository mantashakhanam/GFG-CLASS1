#include<stdio.h>

int mul(int a, int b){
    int m = 10;
    int n = 11;

    return(a * b);

}


int main(){

    int m = 20;
    int n = 30;
    int s = mul(m, n);
    printf("Multiplication is = %d", s);
    return 0;

}