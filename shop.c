#include<stdio.h>

int main() {

  char item[50];
  float price;
  int quantity;
  char currency = '$';
  float total;

  printf("what item you are buying? : ");
  scanf("%s", &item);
  printf("what is the price for each? : ");
  scanf("%f", &price);
  printf("how many would you like? : ");
  scanf("%d", &quantity);

  total = price * quantity;

  printf("your total to pay is %.2f", total);
  return 0;
}