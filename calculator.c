#include<stdio.h>
int main() {
	double num1,num2;
	char operator;
	double result;

	printf("Enter first number:");
	scanf("%lf", &num1);
        
	printf("Enter an operator (+, -, *, /,):");
	scanf("%c", &operator);

	printf("Enter second  number:");
        scanf("%lf", &num2);

	switch(operator) {
		case '+':
			result= num1 + num2;
			printf("Result: %.2lf\n", result);
			break;
				case '-':
				result== num1 - num2;
				printf("Result: %.2lf\n", result);
				break;
