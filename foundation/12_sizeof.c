//
// Created by freedom on 2024/9/5.
//
#include <stdio.h>

//sizeof方法给出了其在占据的内存

//int main(){
//    char a;
//    int b;
//    double c;
//
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(b));
//    printf("%d\n", sizeof(c));
//
//    return 0;
//}

//sizeof为静态方法会对内进行处理但不会返回

int main(){
    int a=10;

//    printf("%d\n", sizeof(a+1));
    printf("%d\n", sizeof(a+1.0));
    printf("a++=%d", a);

    return 0;
}


