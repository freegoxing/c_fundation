//
// Created by freedom on 2024/9/19.
//
#include <stdio.h>
#include <string.h>

//结构与struct类似

//union MoneyType{
//    int rmb;
//    double dollar;
//    char yuanbao[100];
//};

//typedef union MoneyType{
//    int rmb;
//    double dollar;
//    char yuanbao[100];
//}MT;

//int main(){
//    union MoneyType money;
//
//    printf("%p\n", &money);
//    printf("%p\n", &money.rmb);
//    printf("%p\n", &money.dollar);
//    printf("%p\n", &money.yuanbao);
//
//    printf("%zu\n", sizeof(money));
//    printf("%zu\n", sizeof(money.rmb));
//    printf("%zu\n", sizeof(money.dollar));
//    printf("%zu\n", sizeof(money.yuanbao));
//
//    money.rmb = 100;
//    money.dollar = 100.0;
//    printf("%d\n", money.rmb);
//    strcpy(money.yuanbao, "yingyuan");
//
//    return 0;
//}

union C{
    int i;
    char ch[sizeof(int)];
};

int main(){
    union C c;
    int i;
    c.i = 1234;
    for (i = 0; i < sizeof(int); i++){
        printf("%02hhX ", c.ch[i]);
    }
    return 0;
};