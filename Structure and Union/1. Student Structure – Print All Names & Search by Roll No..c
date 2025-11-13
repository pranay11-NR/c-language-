#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
    char major[30];
    char minor[30];
};

void printAllNames(struct Student s[], int n) {
    printf("\nAll Student Names:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s\n", i+1, s[i].name);
    }
}

void printByRoll(struct Student s[], int n, int roll) {
    for(int i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nStudent Found:\n");
            printf("Roll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n",
                   s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("Student with Roll %d not found!\n", roll);
}

int main() {
    struct Student students[10] = {
        {01, "Amit Sharma", "B.Tech", "CSE", "Mathematics"},
        {02, "Priya Patel", "B.Sc", "Physics", "Chemistry"},
        {03, "Rahul Kumar", "B.Com", "Accounts", "Economics"},
        {04, "Sneha Verma", "B.Tech", "ECE", "Physics"},
        {05, "Vikram Singh", "B.A", "History", "Political Science"},
        {06, "Anjali Gupta", "B.Tech", "IT", "Data Science"},
        {07, "Rohan Mehta", "B.Sc", "Biology", "Zoology"},
        {08, "Kavya Desai", "B.Tech", "Mechanical", "Thermodynamics"},
        {09, "Arjun Nair", "B.Com", "Finance", "Taxation"},
        {10, "Neha Joshi", "B.A", "English", "Literature"}
    };

    printAllNames(students, 10);

    int roll;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    printByRoll(students, 10, roll);

    return 0;
}

