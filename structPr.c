#include<stdio.h>


struct Student
{
    int ID;
    float CGPA;
};
int main()
{
    struct Student s1,s2,s3,s4;
    s1.ID=1;
    s2.ID=2;
    s3.ID=3;
    s4.ID=4;

    s1.CGPA=8.99;
    s2.CGPA=8.99;
    s3.CGPA=8.99;
    s4.CGPA=8.99;
    printf("Enter your ID\n");
    scanf("%d\n",&s1.ID);

    printf("your CGPA IS:\n");
    scanf("%f\n",&s1.CGPA);

    return 0;





}