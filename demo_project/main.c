//
// Created by freedom on 2024/9/22.
//
#include <stdio.h>
#include "mymath.h"


int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int res = max(a, b);
    printf("max = %d\n", res);
    res = min(a, b);
    printf("min = %d\n", res);

    return 0;
}
