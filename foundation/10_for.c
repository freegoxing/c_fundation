//
// Created by freedom on 2024/9/2.
//
#include <stdio.h>

//int main(){
//    int n=0;
//    int i=1;
//    int fact=1;
//    scanf("%d", &n);
//
//    while(i<=n){
//        fact *= i;
//        i++;
//    }
//
//    printf("%d!=%d", n, fact);
//
//    return 0;
//}

//for(initial; condition; increment){
//...
//}
// init 会首先被执行，且只会执行一次。
// 这一步允许您声明并初始化任何循环控制变量。
// 也可以不在这里写任何语句，只要有一个分号出现即可。
// condition。如果为真，则执行循环主体。
// 如果为假，则不执行循环主体，且控制流会跳转到紧接着 for 循环的下一条语句。
// 在执行完 for 循环主体后，控制流会跳回上面的 increment 语句。该语句允许您更新循环控制变量。该语句可以留空，只要在条件后有一个分号出现即可


int main(){
    int n=0;
    scanf("%d", &n);
    int fact=1;

    for( int i=1; i<= n; i++ ){
        fact *=i;
    }

    printf("%d!=%d", n, fact);

    return 0;
}

//for语句的循环次数
//对于for(i=0; i<n; i++)
//循环次数为n
//i=n
