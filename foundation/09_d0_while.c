//
// Created by freedom on 2024/9/2.
//
#include <stdio.h>

int main(){
    int x;
    int n = 0;

    scanf("%d", &x);

    do {
        x /= 10;
        n++;
    }while(x>0);

    printf("%d", n);

    return 0;
}

//do_while比while会多执行一次
//如用while写
//while( x>0 ){
//        n++;
//        x /= 10;
//    }
//会把0的位数变成0