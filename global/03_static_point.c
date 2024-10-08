//
// Created by freedom on 2024/9/21.
//
#include <stdio.h>

int *f(void );
void g(void );

int main(){
    int *p = f();
    printf("*p = %d\n", *p);
    g();
    printf("*p = %d\n", *p);

    return 0;
}

int *f(void ){
    static int i = 12;
    printf("i的地址%p\n", &i);
    return &i;
}

void g(void ){
    int k = 24;
    printf("k的地址%p\n", &k);
}