//
// Created by freedom on 2024/9/21.
//
#include <stdio.h>

int gAll = 10;
void f(void );

int main(){
    f();
    f();
    return 0;
}

void f(){
    static int all = 20;
    int i = 20;
    printf("all = %d\n",all);
    printf("i = %d\n",i);
    i++;
    all++;
    printf("all = %d\n",all);
    printf("i = %d\n",i);

}

