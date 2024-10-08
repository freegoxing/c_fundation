//
// Created by freedom on 2024/9/22.
//
#include <stdio.h>

//static int gAll = 13;
static int res;
//用static修饰后res只存在则个文件中

int max(int a, int b) {
    if (a > b) {
        res = a;
    } else {
        res = b;
    }

    return res;
}

int min(int a, int b){
    if (a < b) {
        res = a;
    } else {
        res = b;
    }

    return res;
}

#include "mymath.h"
