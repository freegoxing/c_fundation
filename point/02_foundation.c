//
// Created by freedom on 2024/9/10.
//
#include <stdio.h>

//int *p, q;
////说明p是一个指针，但q为普通的int类型

//
//
//void fun(int *p);
//void get(int p);
//
////int main(){
////    int i = 6;
////    printf("%p\n", &i);
////    fun(&i);
////    printf("i=%d\n", i);
////    get (i);
////    printf("i=%d\n", i);
////
////    return 0;
////}
////
////void fun(int *p){
////    printf("%p\n", p);
////    printf("*p=%d\n", *p);
////    *p = 26;
////}
////
////void get(int p){
////    printf("p=%d\n", p);
////    p = 30;
////}
//
//
//
////int main(){
////    int i = 0;
////    int *p;
////    p = &i;
////    *p += 2;
////
////    if (*p == i){
////        printf("ok");
////    }
////
////    return 0;
////}

void swap(int *pa, int *pb);

int main(){
    int a=10;
    int b = 20;
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}