// 	WAP to find the average mark of 5 subjects of a student and find the percentage.
// Assume full mark of each subject is 100
#include <stdio.h>
#include <conio.h>

int main()
{
    int math, physics, english, chemistry, programming;
    float total_marks, average, percentage;

    // printf("Enter the marks of five subjects out of 100:\n");
    // scanf("%d%d%d%d%d", &math, &physics, &english, &chemistry, &programming);

    // Taking data from user
    printf("Enter the mark of Math:");
    scanf("%d", &math);

    printf("Enter the mark of Physics:");
    scanf("%d", &physics);

    printf("Enter the mark of English:");
    scanf("%d", &english);

    printf("Enter the mark of Chemistry:");
    scanf("%d", &chemistry);

    printf("Enter the mark of Programming:");
    scanf("%d", &programming);

    // calculation to find total mark of 5 subjects
    total_marks = math + physics + english + chemistry + programming;

    // calculation to average mark of 5 subject
    average = total_marks / 5.0;

    // calculation to percentage of 5 subject
    percentage = (total_marks / 500.0) * 100;

    printf("The average mark is %.2f\n", average);
    printf("The percentage is %.2f%%\n", percentage);

    getch();
    return 0;
}