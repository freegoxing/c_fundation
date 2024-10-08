//
// Created by freedom on 2024/9/8.
//
#include <stdio.h>

int main(){
    int count = 10;

    count = (count >20)? count-10 : count+10;

    printf("count=%d", count);

    return 0;
}

//if (count>20){
//    count -= 10;
//}else{
//    count += 10;
//}