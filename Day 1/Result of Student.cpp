#include<stdio.h>
int main(){
    char name[50], registrationID[50], RollNo[20];
    char subjects[100][20];
    int attendance[100], n;
    int practical[100], assignment[100], CA_1[100], CA_2[100], external[100];
    int internalMarks[100], totalMarks[100];
    int TotalMarks = 0;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter registration number: ");
    fgets(registrationID, sizeof(registrationID), stdin);

    printf("Enter roll number: ");
    scanf("%s", RollNo);

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter subject name: ");
        scanf("%s", subjects[i]);

        printf("Enter Attendance of the subject: ");
        scanf("%d", &attendance[i]);

        printf("\n");

        if(attendance[i] >= 75){
            printf("You are eligible to sit for Exams in %s\n", subjects[i]);

            printf("Enter marks for Practical: ");
            scanf("%d", &practical[i]);

            printf("Enter marks for Assignments: ");
            scanf("%d", &assignment[i]);

            printf("Enter marks obtained in CA 1: ");
            scanf("%d", &CA_1[i]);

            printf("Enter marks obtained in CA 2: ");
            scanf("%d", &CA_2[i]);

            printf("Enter External marks: ");
            scanf("%d", &external[i]);

            //Calculate total marks
            internalMarks[i] = practical[i] + assignment[i] + CA_1[i] + CA_2[i];
            totalMarks[i] = internalMarks[i] + external[i];
            TotalMarks += totalMarks[i];
        } else {
            printf("Debarred, You are not eligible to sit for exam in %s\n", subjects[i]);
            totalMarks[i] = 0;
            break;
        }
    }

    printf("Student Name: %s\n", name);
    printf("Registration ID: %s\n", registrationID);
    printf("Roll Number: %s\n", RollNo);

    int maxTotalMarks = n * 100;
    float percentage = ((float)TotalMarks / (float)maxTotalMarks) * 100;

    if(percentage >= 90 && percentage <= 100){
        printf("YOU GOT 'O'\n");
    }
    else if(percentage >= 80 && percentage < 90){
        printf("YOU GOT 'A+'\n");
    }
    else if(percentage >= 70 && percentage < 80){
        printf("YOU GOT 'A'\n");
    }
    else if(percentage >= 60 && percentage < 70){
        printf("YOU GOT 'B'\n");
    }
    else if(percentage >= 50 && percentage < 60){
        printf("YOU GOT 'C'\n");
    }
    else if(percentage >= 40 && percentage < 50){
        printf("YOU GOT 'D'\n");
    }
    else if(percentage >= 35 && percentage < 40){
        printf("YOU GOT 'E'\n");
    }
    else {
        printf("Fail\n");
    }
    return 0;
}