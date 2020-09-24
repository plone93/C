/*
char : -128 ~ 127
short int : -32768 ~ 32767
int 
long int : -2147483648 ~ 2147483647


정수
unsigned char : 0 ~ 256 
unsigned short int : 0 ~ 65535
unsigned int
unsigned long int : 0 ~ 4294967295

실수
float
double
long double

*/

#include<stdio.h>

int sum(int, int);//프로토 타입

int main() {//메인
	int A = 1;
	int B = 2;
	int result = sum(A, B);

	printf("A+B = %d", result);

	return 0;
}

int sum(int A, int B) {//함수
	int result = A + B;

	return result;
}