#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student data
struct Student {
    int id;
    char name[50];
    char lang[20]; // C or Python
};

// Function 1: Show what C and Python do
void showSkills() {
    printf("\n--- My Skills ---\n");
    printf("C       -> Memory, Pointers, Logic, DSA\n");
    printf("Python  -> Automation, Scripting, Problem Solving\n");
    printf("-----------------\n");
}

// Function 2: Save data using File Handling
void saveData() {
    struct Student s1;
    FILE *fp;

    printf("\nEnter ID: ");
    scanf("%d", &s1.id);
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Fav Language (C/Python): ");
    scanf("%s", s1.lang);

    fp = fopen("data.txt", "a");
    if(fp == NULL) {
        printf("File Error!\n");
        return;
    }
    
    fprintf(fp, "%d %s %s\n", s1.id, s1.name, s1.lang);
    fclose(fp);
    printf("Data Saved Successfully to data.txt!\n");
}

// Function 3: Using Pointer
void pointerDemo() {
    int a = 10;
    int *p = &a;
    printf("\nPointer Demo:\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", p);
    printf("Value via pointer: %d\n", *p);
}

int main() {
    int choice;
    
    while(1) {
        printf("\n============================\n");
        printf("  ASLAM'S C TOOLKIT v1.0\n");
        printf("============================\n");
        printf("1. Show My Skills\n");
        printf("2. Save Student Data (File Handling)\n");
        printf("3. Pointer Demo\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                showSkills();
                break;
            case 2:
                saveData();
                break;
            case 3:
                pointerDemo();
                break;
            case 4:
                printf("Exiting... Happy Coding!\n");
                exit(0);
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
