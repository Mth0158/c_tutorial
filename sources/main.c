#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sayHi(char name[]);
int max(int num1, int num2);
void calculate(double num1, char operator, double num2);

struct Student {
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main()
{
  // ---------

  // printf("  /|\n");
  // printf(" / |\n");
  // printf("/  |\n");

  // ---------

  // char characterName[] = "John";
  // int characterAge = 35;
  // printf("There once was a man named %s\n", characterName);
  // printf("He was %d years old.\n", characterAge);

  // ---------

  // printf("%f", 8.9);

  // ---------

  // int age;
  // printf("Enter your age: ");
  // scanf("%d", &age);
  // printf("You are %d y-o\n", age);

  // ---------

  // char name[20];
  // printf("Enter your name: ");
  // scanf("%s", name);
  // printf("Your name is %s", name);

  // ---------

  // char name[50];
  // printf("Enter your full name: ");
  // fgets(name, 50, stdin);
  // printf("Your full name is %s", name);

  // ---------

  // double num1;
  // double num2;
  // printf("Enter first number: ");
  // scanf("%lf", &num1);
  // printf("Enter second number: ");
  // scanf("%lf", &num2);
  // printf("Answer: %f", num1 + num2);

  // ---------

  // char color[20];
  // char pluralNoun[20];
  // char celebrity[20];

  // printf("Enter a color:\n> ");
  // scanf("%s", color);
  // getchar();
  // printf("Enter a plural noun:\n> ");
  // scanf("%s", pluralNoun);
  // getchar();
  // printf("Enter a celebrity:\n> ");
  // fgets(celebrity, 20, stdin);

  // printf("\n");
  // printf("Roses are %s\n", color);
  // printf("%s are blue\n", pluralNoun);
  // printf("I love %s\n", celebrity);

  // ---------

  // int luckyNumbers[] = {4, 8, 16};
  // printf("%d", luckyNumbers[0]);

  // ---------
  // sayHi("Mike");

  // ---------
  // printf("%d", max(5, 8));

  // ---------
  // double num1;
  // double num2;
  // char operator;

  // printf("Enter a number:\n> ");
  // scanf("%lf", &num1);
  // printf("Enter an operator:\n> ");
  // scanf(" %c", &operator);
  // printf("Enter a number:\n> ");
  // scanf("%lf", &num2);

  // calculate(num1, operator, num2);

  // ---------
  // struct Student student1;
  // student1.age = 22;
  // student1.gpa = 3.2;
  // strcpy(student1.name, "Jim");
  // strcpy(student1.major, "Business");

  // printf("%f", student1.gpa);

  // ---------
  // int index = 1;
  // while(index <= 5) {
  //   printf("%d\n", index);
  //   index++;
  // }

  // ---------
  // int nums[2][2] = {
  //   {1, 3},
  //   {2, 4}
  // };
  int age = 30;
  int * pAge = &age;
  double gpa = 3.2;
  double * pGpa = &gpa;
  printf("age: %p\n", &age);
  printf("gpa: %p\n", &gpa);

  return 0;
}

void calculate(double num1, char operator, double num2) {
  // if (operator == '+') {
  //   printf("%f", num1 + num2);
  // } else {
  //   printf("Wrong operator entered");
  // }

  // ---------
  switch(operator) {
    case '+' :
      printf("%f", num1 + num2);
      break;
    case '-' :
      printf("%f", num1 - num2);
      break;
    default :
      printf("Wrong operator entered");
  }
}

void sayHi(char name[]) {
  printf("Hello %s", name);
}

int max(int num1, int num2) {
  int result;
  if (num1 > num2) {
    result = num1;
  } else {
    result = num2;
  }
  return result;
}
