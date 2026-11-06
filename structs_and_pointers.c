#include <stdio.h>
#include <string.h>

struct user{
    char name[63];
    int age;
};
void displayuser(struct user u){
    printf("Name %s\n", u.name);
    printf("Age %d", u.age);
}
void displayuserptr(struct user *u){
    printf("\n\tName %s\n", (*u).name);
    printf("\tAge %d", (*u).age);
    //OR
    printf("\n\tName %s\n", u->name);
    printf("\tAge %d", u->age);    
}
int main(void){
    //struct user u1, u2;
    /*fgets(u1.name, sizeof(u1.name), stdin);
    scanf("%d", &u1.age);*/
    //OR
    /*struct user u1 = {"pranav", 17};
    struct user u2 = {"karthikeya", 17};*/
    
    struct user a = {"Vrnka", 18};
    displayuser(a); //only need to give the name of the user no need to give struct user a.

    //NOW USING POINTERS
    displayuserptr(&a);
    
}