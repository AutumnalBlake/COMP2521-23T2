#include <stdio.h>

void swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main(void) {
	int a = 5;
	int b = 7;
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}

