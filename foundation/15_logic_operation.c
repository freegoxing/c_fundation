//
// Created by freedom on 2024/9/8.
//
#include <stdio.h>

// !  否
// && 且
// || 或

// 短路

int main(){
    int a = -1;
    if (a>0 && a++>1){
        printf("ok\n");
    }
    printf("%d\n", a);

    return 0;
}

