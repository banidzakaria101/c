#include <stdio.h>
#include<stdbool.h>

int main() {
    printf("Hello, World!\n");
    printf("I am learning C language. \n");

    int age = 22;
    int year = 2025;
    float gpa = 3.8;
    char grade = 'A';
    char name [] = "zakaria";
    bool isOnline = false;
    printf("this year is: %d.\n", year);
    printf("I am %d years old.", age);
    printf("My gpa is: %.2f.\n", gpa);
    printf("My grade is: %c.\n", grade);
    printf("Hello %s. \n", name);
    if (isOnline) {
      printf("You are online!");
    } else {
      printf("you are offline!");
    }

    
    return 0;
}