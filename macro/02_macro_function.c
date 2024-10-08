//
// Created by freedom on 2024/9/22.
//
#include <stdio.h>
#define cube(x)  ((x)*(x)*(x))

//定义宏的原则 一切都要有括号

int main(){
    int i = 3;
    printf("cube() = %d\n", cube(i+i));

    return 0;
}
