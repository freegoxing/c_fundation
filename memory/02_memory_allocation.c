//
// Created by freedom on 2024/9/11.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = malloc(10*sizeof(int));

    printf("%p\n", p);
    printf("%d\n", *p); //未初始化
    int i = 0;
    for(i = 0; i < 10; i++){
//        *(p+i) = i+1;
        p[i] = i+1;
//        i[p] = i + 1; //在解析时是
    }

//    扩容
//    变成20个int类型空间
//    前10为之前分配的
    int *pp = realloc(p, 20*sizeof(int));

    for(i = 0; i < 20; i++){
        printf("%d\n", *(p+i));
    }

    free(p);
    free(pp);
    return 0;
}

//int main(){
//    会帮助初始化
//    int *p = calloc(10, sizeof(int));
//
//    int i = 0;
//    for(i = 0; i < 100; i++)
//    {
//        printf("%d\n", *(p+i));
//    }
//
//    return 0;
//}

