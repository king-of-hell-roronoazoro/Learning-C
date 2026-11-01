#include <stdio.h>
struct student{
    int roll_number;
    char name[63];
    int maths_marks;
    int phy_marks;
    int chem_marks;
};
void printfunction(struct student students[]); //initialise function
int total(struct student students[], int i){
        return students[i].maths_marks + students[i].phy_marks + students[i].chem_marks;
}
float average(int a){
    return (float)a/3;
}
int topper(float avg[]){
    int topper = 0;
    for(int i = 1; i<5; i++){
        if(avg[i]>avg[topper]){
            topper = i;
        }
    }
    return topper;
}
int main() {
    struct student students[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the details of student %d in the exact order of roll number, maths, phy, chem, name:\n", i+1);
        scanf("%d", &students[i].roll_number);
        scanf("%d", &students[i].maths_marks);
        scanf("%d", &students[i].phy_marks);
        scanf("%d", &students[i].chem_marks);
        //cant put fgets immedieatly after scanf coz scanf give \n and fgets takes it as input.
        getchar(); //consumes the single character \n
        fgets(students[i].name, sizeof(students[i].name), stdin);
    }
    printfunction(students); //giving array to function
    float avg[5];
    for(int j = 0; j<5; j++){
        avg[j] = average(total(students, j));
    }
    int top = topper(avg);
    printf("Topper is student number: %d", top+1);
}   
void printfunction(struct student students[]){
    for(int i = 0; i<5; i++){
        printf("Details of student %d:\nThe student %s\nGot %d in maths, %d in physics and %d in chem\nThe total marks are %d and average of the student is %.2f.\n", i+1, students[i].name, students[i].maths_marks, students[i].phy_marks, students[i].chem_marks, students[i].maths_marks + students[i].phy_marks + students[i].chem_marks, (float)(students[i].maths_marks + students[i].phy_marks + students[i].chem_marks)/3);
    }
}
