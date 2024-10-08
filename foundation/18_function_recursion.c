//
// Created by freedom on 2024/9/28.
//
#include <stdio.h>

void move(char x, char y);
void hanoi(int n, char one, char two, char three);


int main(){
    int number;
    scanf("%d", &number);

    hanoi(number, 'A', 'B', 'C');

    return 0;
}


void hanoi(int n, char one, char two, char three){
    if (n ==1){
        move(one, three);
    }else{
        hanoi(n-1, one, three, two);
        move(one, three);
        hanoi(n-1, two, one, three);
    }
}


void move(char x, char y){
    printf("%c -> %c\n", x, y);
}
