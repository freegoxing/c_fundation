//
// Created by freedom on 2024/9/10.
//
#include <stdio.h>

//在64位架构的计算机中用16进制输出时与%p不同
//但在32位计算机中一样

//int main(){
//    int i = 0;
//
//    int p;
//    p = (int)&i;
////    强制类型转换
//
//    printf("0x%x\n", p);
////    内存地址用16进制比较方便
//
//    printf("%p\n", &i);
////    但输出地址有专门的占位符
//
//    printf("%lu\n", sizeof (int));
//
//    printf("%lu\n", sizeof (&i));
//
//    return 0;
//}

//int main(){
//    int i=0;
//    int p=0;
//
//    printf("%p\n", &i);
//    printf("%p\n", &p);
//
//    return 0;
//}

//int main(){
//    int a[10];
//
//    printf("%p\n", &a);
//    printf("%p\n", a);
//    printf("%p\n", &a[0]);
//    printf("%p\n", &a[1]);
//
//    return 0;
//}