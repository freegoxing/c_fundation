//
// Created by freedom on 2024/9/18.
//
#include <stdio.h>
#include <string.h>

struct Friend{
    char name[100];
    int age;
    char gender;
    double height;
};

int main(){
//    struct Friend f1;
//    strcpy(f1.name, "freedom");
//    f1.age = 18;
//    f1.gender = 'M';
//    f1.height = 1.8;
//    or
//    struct Friend f1 = {"freedom", 18, 'M', 1.8};
//    or
    struct Friend f1 = {.name = "freedom", .age = 18, .gender = 'M', .height = 1.8};


    printf("name: %s\n", f1.name);
    printf("age: %d\n", f1.age);
    printf("gender: %c\n", f1.gender);
    printf("height: %.1f\n", f1.height);

    return 0;
}
