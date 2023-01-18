//1번. 소수 구해서 배열에 넣어서 출력 n<28
#include <stdio.h>
int main(void) {
	int a[28] = { 0 };
	int i, j;

	for (i = 2; i < 28; i++) {
		if (a[i] == 0) {
			printf("%d ", i);
			for (j = i; j < 28; j += i)
				a[j] = 1;
		}
	}
}