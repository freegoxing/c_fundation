//
// Created by freedom on 2024/9/21.
//
#include <stdio.h>

enum color{
    red,
    green,
    blue
};

//比const int或#define 要好

int main(){
    enum color c = blue;
    printf("%d\n",c);

    return 0;
}