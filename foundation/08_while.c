//
// Created by freedom on 2024/9/2.
//
#include <stdio.h>

int main(){
    int x=0;
    int n=0;

    scanf("%d", &x);

    n++;
    x /= 10;
    while( x>0 ){
        n++;
        x /= 10;
    }

    printf("%d\n", n);

    return 0;
}



