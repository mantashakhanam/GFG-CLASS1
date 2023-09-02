#include<stdio.h>

int div(int a, int b){

    return(a/b);

}

int main(){

    int m = 20;
    int n = 30;
    int s = div(m, n);
    printf("Division = %d", s);
    return 0;

}
