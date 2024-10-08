//
// Created by freedom on 2024/9/8.
//

// 找素数
#include <stdio.h>

//int main() {
//    int begin, end;
//    int cnt = 0;
//    scanf("%d %d", &begin, &end);
//
//    for (int i = begin + 1; i < end; i++) {
//        int isPrime = 1;
//        for (int k = 2; k < i - 1; k++) {
//            if (i % k == 0) {
//                isPrime = 0;
//                break;
//            }
//        }
//
//        if (isPrime) {
//            printf("%d ", i);
//            cnt++;
//        }
//    }
//
//
//    if (cnt == 0){
//        printf("Error");
//    }
//
//    return 0;
//}

//可简化

//int isPrime(int i){
//    int ret=1;
//    int k;
//    for (k=2; k<i-1; k++){
//        if (i%k == 0){
//            ret = 0;
//            break;
//        }
//    }
//    return ret;
//}
//
//int main(){
//    int m, n;
//    int sum = 0;
//    int cnt = 0;
//    int i;
//
//    scanf("%d %d", &m, &n);
//    if (m == 1){
//        m = 2;
//    }
//
//    for (i = m; i <= n; i++){
//        if (isPrime(i)){
//            sum += i;
//            cnt ++;
//        }
//    }
//
//    printf("%d %d\n", cnt, sum );
//
//    return 0;
//}

// 原型声明

//必须先把定义的函数写出来
//但可以把函数头放前面
//函数体放后面

//在声明中参数表中没必要匹配但要类型正确

int isPrime(int i); //声明

int main(){
    int m, n;
    int sum = 0;
    int cnt = 0;
    int i;

    scanf("%d %d", &m, &n);
    if (m == 1){
        m = 2;
    }

    for (i = m; i <= n; i++){
        if (isPrime(i)){
            sum += i;
            cnt ++;
        }
    }

    printf("%d %d\n", cnt, sum );

    return 0;
}

int isPrime(int i){
    int ret=1;
    int k;
    for (k=2; k<i-1; k++){
        if (i%k == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}

