//
// Created by freedom on 2024/9/18.
//
#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[100];
    int age;
}S;

void method(S s);
void method1(S *s);

int main(){
    S s1;
    strcpy(s1.name,"freedom");
    s1.age = 18;

    printf("name = %s, age = %d\n",s1.name,s1.age);
    method(s1);
    printf("name = %s, age = %d\n",s1.name,s1.age);
    method1(&s1);
    printf("name = %s, age = %d\n",s1.name,s1.age);
    return 0;
}

void method(S s){
    printf("main name = %s, age = %d\n",s.name,s.age);

    printf("修改学生名字：");
    scanf("%s",s.name);
    printf("修改学生年龄：");
    scanf("%d",&s.age);

    printf("method name = %s, age = %d\n",s.name,s.age);
}

//void method1(S *s){
//    printf("main name = %s, age = %d\n",(*s).name,(*s).age);
//
//    printf("修改学生名字：");
//    scanf("%s",(*s).name);
//    printf("修改学生年龄：");
//    scanf("%d",&((*s).age));
//
//    printf("method name = %s, age = %d\n",(*s).name,(*s).age);
//}
//or
void method1(S *s){
    printf("main name = %s, age = %d\n",s->name,s->age);

    printf("修改学生名字：");
    scanf("%s",s->name);
    printf("修改学生年龄：");
    scanf("%d",&(s->age));

    printf("method name = %s, age = %d\n",s->name,s->age);
}

