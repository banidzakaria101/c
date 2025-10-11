#include<stdio.h>

int main() {

  int age;
  float gpa;
  char grade;
  char name[30];

  printf("what is your full name ?\n");
  //scanf("%s", name);
  fgets(name, sizeof(name), stdin);
  printf("what is your age ?\n");
  scanf("%d", &age);
  printf("what is your grade ?\n");
  scanf(" %c", &grade);
  printf("your gpa ?\n");
  scanf("%f", &gpa);


  printf("Hello %s your age is %d and your grade is %c and your location is %f", name, age, grade, gpa);

  return 0;
}