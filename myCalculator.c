#include<stdio.h>

int sum(int a, int b){

    return(a +b);

}

int main(){

    int m = 20;
    int n = 30;
    int s = sum(m, n);
    printf("SUM = %d", s);
    return 0;

}