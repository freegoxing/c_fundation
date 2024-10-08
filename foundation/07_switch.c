//
// Created by freedom on 2024/9/2.
//
#include <stdio.h>

//switch (条件){
//    case 1:
//        ...
//        break;
//    ...
//    default:
//        ...
//}

int main(){
    int week = 0;

    scanf("%d", &week);

    switch (week){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("a week only have sven day");

    }

    return 0;
}

//注意
//switch表达式的条件控制结果必须为int类型
//break结束匹配