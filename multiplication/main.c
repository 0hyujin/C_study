//2��. �迭 (0~10)������ �����ϰ� 2�� ���Ͽ� ���
//���ϴ� �Լ�, ����ϴ� �Լ� ������ 
//å �Ⱥ��� ������ Ǯ��
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