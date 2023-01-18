//2번. 배열 (0~10)까지를 선언하고 2를 곱하여 출력
//곱하는 함수, 출력하는 함수 나누기 
//책 안보고 스스로 풀기
#include <stdio.h>

int main() {
    int a[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    multiple(a, 11);
    return 0;
}
int multiple(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] *= 2;
        printf("%d\n", a[i]);
    }
}