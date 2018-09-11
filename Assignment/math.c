/*
 *math.c
 *
 *Created on: Sept 10, 2018
 *	Last Edited: Sept 10, 2018
 *	 Author: Jacob Okun
 */
 
 #include <stdio.h>
 //includes math.h library
 #include <math.h>
int main()
{
	
	//Operator is the operation the user wishes to use such as +, -, *, /, etc.
	char operator;
	
	//num1 is first integer entered by user and num2 is second integer entered by user
	int num1, num2;
	
	printf("Enter Operation you wish to use: ");
	scanf("%c", &operator);
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	switch(operator)
	{
		//Case for addition
		case '+':
			printf("%.1d + %.1d = %.1d", num1, num2, num1 + num2);
			break;
		
		//Case for subtraction
		case '-':
			printf("%.1d - %.1d = %.1d", num1, num2, num1 - num2);
			break;
			
		//Case for multiplication
		case '*':
			printf("%.1d * %.1d = %.1d", num1, num2, num1 * num2);
			break;
		
		//Case for division
		case '/':
			printf("%.1d / %.1d = %.1d", num1, num2, num1 / num2);
			break;
			
		//Case for modulus
		case '%':
			printf("Remainder = %d", num1, num2, num1 % num2);
			break;
			
		//Case for Left Shift
		case '<':
			printf("%.1d << %.1d = %.1d", num1, num2, num1 << num2);
			break;
			
		//Case for Right Shift
		case '>':
			printf("%.1d >> %.1d = %.1d", num1, num2, num1 >> num2);
			break;
			
		//Case for Bitwise AND
		case '&':
			printf("%.1d & %.1d = %.1d", num1, num2, num1 & num2);
			break;
			
		//Case for Bitwise OR
		case '|':
			printf("%.1d | %.1d = %.1d", num1, num2, num1 | num2);
			break;
			
		//Case for Bitwise XOR
		case '^':
			printf("%.1d ^ %.1d = %.1d", num1, num2, num1 ^ num2);
			break;
		
		//Case for Bitwise Inverse
		case '~':
			printf("~%.1d", num1, num2, ~num1);
			break;
			
	}
	
	return 0;
}
 