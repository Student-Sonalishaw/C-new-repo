#include<stdio.h>
//Define a structure for student details(name,roll,marks) and print them
struct student 
{
    char name[50];
    int roll; 
    float marks;
};

int main(){
    struct student s1;
    //Input details
    printf("Enter student name: ");
    fgets(s1.name,sizeof(s1.name), stdin); 

    printf("Enter student roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter student marks: ");
    scanf("%f", &s1.marks);

    //print student details
    printf("\n---- Student Details----\n");
    printf("Name of the student is: %s",s1.name); //Already includes from fgets
    printf("The roll number of the student is: %d\n",s1.roll);
    printf("Marks of the student: %.2f\n",s1.marks);

    return 0;
}