#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	struct input {
		int x, y;
	}A1,A2;
	printf("Input A1 (2) : ");
	scanf("%d %d", &A1.x, &A1.y);
	printf("Input A2 (2) : ");
	scanf("%d %d", &A2.x, &A2.y);
	int a = A1.x + A1.y;
	int b = A2.x + A2.y;
	printf("A1 = %d\n",a);
	printf("A2 = %d", b);
	if (a < 0 && b < 0) {
		printf("\nab = +"); 
	
	}
	if (a == 0 || b == 0) {
		printf("\nab = 0");

	}
	if((a > 0 && b < 0)|| (a < 0 && b > 0)) {
		printf("\nab = -");
	}
	if (a > 0 && b > 0) {
		printf("\nab = +");

	}

	return 0;
}