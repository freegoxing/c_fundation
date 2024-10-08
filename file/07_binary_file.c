//
// Created by freedom on 2024/9/22.
//
#include <stdio.h>
#define STR_LEN 20

typedef struct _student {
    char name[STR_LEN];
    int gender;
    int age;
}Student;

void getList(Student aStu[], int number);
int save(Student aStu[], int number);

int main(){
    int number = 0;
    printf("请输入学生人数：");
    scanf("%d", &number);
    Student aStu[number];

    getList(aStu, number);
    if (save(aStu, number)){
        printf("保存成功！\n");
    } else {
        printf("保存失败！\n");
    }

    return 0;
}

void getList(Student aStu[], int number){
    char format[STR_LEN];
    sprintf(format, "%%%ds", STR_LEN-1);

    int i;
    for (i=0; i<number; i++){
        printf("第%d个学生", i+1);
        printf("\t姓名：");
        scanf(format, aStu[i].name);
        printf("\t性别：");
        scanf("%d", &aStu[i].gender);
        printf("\t年龄：");
        scanf("%d", &aStu[i].age);
    }
}

int save(Student aStu[], int number){
    int ret = -1;
    char *path = "D:\\coding\\C\\c_project\\file\\student.data";
    FILE *fp = fopen(path, "wb");
    if (fp){
        ret = fwrite(aStu, sizeof(Student), number, fp);
        fclose(fp);
    }
    return ret==number;
}