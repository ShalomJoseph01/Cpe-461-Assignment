#include <stdio.h>
#include <stdlib.h>

int main ()
{

    // Declare variables
    int  n=0, num_cour;
    char grade;
    float credit,totcredit, gpa, grade_point=0.0, d,result;
    char course;
//int A=5, B=4, C=3, D=2, F=0;
printf("\tEnter your the following details.\n");
printf("Number of courses:");
scanf("%d", &num_cour);
    // Input courses
    for(n=1; n<(num_cour+1); n++) {
        printf(" \tCourse %d:", n);
        scanf("\t%char", &course);

            printf("credit: ");
            scanf("\t%f", &credit);

            // Input grades

                printf("Grade:");
                scanf("\t%char", &grade);

            // Conversion of grades
            if (grade = "A"){
                grade_point = 5.0;
            }
            else if (grade = "B"){
                grade_point = 4.0;
            }
            else if (grade = "C")
            {
                grade_point = 3.0;
            }
            else if (grade ="D"){
                grade_point = 2.0;
            }
            else if (grade = "F"){
                grade_point = 0.0;
            }
            else {
                printf("wrong input");
            }

d=grade_point*credit;
result += d;
totcredit+= credit;
gpa = result/totcredit;

    }
            // Formula to calculate GPA



        printf("GPA: %.2f", gpa);

    return 0;
}

