//
// Created by freedom on 2024/9/2.
//
#include <stdio.h>

//关系运算符的结果有两种
//true为1
//false为0

//int main(){
//    printf("%d\n", 5==3); //结果为0
//    printf("%d\n", 5!=3); //结果为1
//
//    return 0;
//}

//先比较大小在比较==与！=

//if

//if (条件){
//    ...
//}

//int main()
//{
//    int a = 1;
//    int b = 8;
//
//    printf("%d\n", 5>3 == 6>4);
//    printf("%d\n", 6>5>4);
//    printf("%d\n", a==b==6 );
//    printf("%d\n", a ==b >0);
//
//    return 0;
//}

//int main()
//{
//    double price = 0;
//    double bill = 0;
//
//    printf("输入金额");
//    scanf("%lf", &price);
//
//    printf("输入票面：");
//    scanf("%lf", &bill);
//
//    if (bill>=price)
//    {
//        printf("找零%lf", bill-price);
//    } else{
//        printf("票面不够");
//    }
//
//    return 0;
//}

//if级联

int main(){
    int a = 1;

    if (a==0){
        printf("a=0");
    }else if (a==1){
        printf("a=1");
    }else if (a==3){
        printf("a=2");
    }

    return 0;
}