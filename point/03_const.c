//
// Created by freedom on 2024/9/11.
//
#include <stdio.h>
/*
 * point is const
 */


//int main(){
//    int i = 10;
//    int *const q = &i;
////    利用point去修改i的value可以
//    *q = 26;
//    printf("i=%d", i);
//
////    但q不能做运算
////    q++ is error
//
//    return 0;
//}

/*
 * point to is const
 */

int main(){
    int i = 10;
    int j = 11;
    const int *p = &i; //i是可变的 //且形式等同与 int const *p
//     不能用point去修改value
//     *p = 26 is error

//     可以再指向另一个地址
    p = &j;
    printf("*p=%d", *p);

    return 0;
}