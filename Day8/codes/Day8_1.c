#include <stdio.h>
double addition(double num1, double num2);
void multiplication(double a, double b);
int division(int num, int den);
void subtract(void);
int main(void)
{
	double num1 = 10.00, num2 = 2.00, res;
	res = addition(num1, num2); // function call
	printf("%.2lf \n", res);
	multiplication(2.0, 4.0);
	int num, den, res1;
	printf("Enter the num1 and num2");
	scanf("%d%d", &num, &den);
	res1 = division(num, den);
	printf("result = %d\n", res1);
	subtract();
	return 0;
}

//user defined functions 
//function definations 
void subtract(void)
{
	int p, q, r; // local variables
	printf("\n Enter the 2 numbers");
	scanf("%d%d", &p, &q);
	r = p - q;
	printf("res = %d\n", r);
}

int division(int num, int den)
{
	//int r;
	//r = num / den;
	//return r;
	return num / den;
}

void multiplication(double a, double b)
{
	double c;
	c = a * b;
	printf("result = %.2lf\n", c);
	//return;
}

double addition(double num1, double num2)
{
	double res;
	res = num1 + num2;
	return res;
}
//API  =>  functions 
