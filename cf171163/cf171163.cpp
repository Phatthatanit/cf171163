#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct input {
	int x[2];
}A1, A2,A3;

void ck() {
	A3.x[1] = A1.x[1] + A1.x[2];
	A3.x[2] = A2.x[1] + A2.x[2];
	printf("A1 = %d\n", A3.x[1]);
	printf("A2 = %d", A3.x[2]);
	if (A3.x[1] < 0 && A3.x[2] < 0) {
		printf("\nab = +");

	}
	if (A3.x[1] == 0 || A3.x[2] == 0) {
		printf("\nab = 0");

	}
	if ((A3.x[1] > 0 && A3.x[2] < 0) || (A3.x[1] < 0 && A3.x[2] > 0)) {
		printf("\nab = -");
	}
	if (A3.x[1] > 0 && A3.x[2] > 0) {
		printf("\nab = +");

	}
}
int main() {
	
	printf("Input A1 (2) : ");
	scanf("%d %d", &A1.x[1], &A1.x[2]);
	printf("Input A2 (2) : ");
	scanf("%d %d", &A2.x[1], &A2.x[2]);
	ck();

	return 0;
}