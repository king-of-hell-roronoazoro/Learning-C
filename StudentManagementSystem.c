#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char name[100];
    int age;
    int class;
}ss;

int main(void){
    FILE *fp;
    ss students;
    int cont = 1, wtd;
    printf("=====STUDENT MANAGEMENT SYSTEM=====\n");
    do{
        printf("Type\n1. Add student\n2. Search student\n3. Display student information\n");
        scanf("%d", &wtd);
        switch (wtd){
            case 1:
                fp = fopen("students.txt", "a");
                if(fp == NULL){
                    printf("Error");
                    break;
                }
                printf("Enter name: ");
                scanf(" %99[^\n]", students.name);
                getchar();
                printf("enter age: ");
                scanf("%d", &students.age);
                printf("enter class: ");
                scanf("%d", &students.class);
                fprintf(fp, "%s %d %d\n", students.name, students.age, students.class);
                fclose(fp);
                break;
            case 2:
                fp = fopen("students.txt", "r");
                if(fp == NULL){
                    printf("Error");
                    break;
                }
                printf("Enter the roll number of the student you want the details of: ");
                int Age; //umm i didnt make a roll number so ill make do with age. SRY
                scanf("%d", &Age);
                while(fscanf(fp, "%s %d %d", students.name, &students.age, &students.class)!=EOF){
                    if(Age == students.age){
                        printf("\n%s %d %d\n", students.name, students.age, students.class);
                        break;
                    }
                }
                break;
            case 3:
                fp = fopen("students.txt", "r");
                if(fp == NULL){
                    printf("Error");
                    break;
                }
                printf("The student details(in order of name, age and class) are: ");
                while(fscanf(fp, "%s %d %d", students.name, &students.age, &students.class)!=EOF){
                    printf("\nName: %s, Roll no: %d, age: %d\n", students.name, students.age, students.class);
                }
                break;
            default:
                printf("Error try again\n");
                break;
        }
        printf("do you want to continue(1) or not(-1): ");
        scanf("%d", &cont);
        if(cont!=1 && cont!=-1){
         break;   
        }
        fclose(fp);
    }while(cont != -1);
    printf("---Program Ended---");
}