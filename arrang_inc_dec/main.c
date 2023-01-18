//배열사용해서 더하고 뺀것 출력
#include <stdio.h>

int main() {

	int a[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	increase(a, 11);
	decrease(a, 11);
	return 0;
}
int increase(int a[], int size) {
	int i;
	//int size;
	for (i = 0; i < size; i++)
		printf("%d ", ++a[i]);
	printf("\n");
}
int decrease(int a[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", --a[i]);
	printf("\n");
}