//
// Created by freedom on 2024/9/21.
//
#include <stdio.h>

int gAll = 10;

int f(void);

int main(){
    printf("in %s gAll = %d\n", __func__ , gAll);
    gAll++;
    f();
    printf("agn in %s gAll = %d\n", __func__ , gAll);
    return 0;
}

int f(void){
    printf("in %s gAll = %d\n", __func__ , gAll);
    int gAll = 0;
    printf("in %s gAll = %d\n", __func__ , gAll);
    return gAll;
}