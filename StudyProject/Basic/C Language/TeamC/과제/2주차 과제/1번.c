#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, n;

	printf("1���� ū N�� 10000���� �۰ų� ���� X�� ���ʷ� �Է�\n");
	scanf("%d %d", &n, &x);

	int*A=(int*)malloc(sizeof(int)*n);//n�� ũ�⸦ �������� ���� ���� A����

	printf("���� A�� �̷�� ���� %d�� �Է�\n", n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}//�� ������ ����A�� ������� ����

	printf("�Է¹��� �������� X���� �������� �Է¹��� ������� ���\n");

	for (int i = 0; i < n; i++) {
		if (A[i] < x) {
			printf("%d ", A[i]);//����A�� i��°���� x����������� ����A�� i��° ���� ����Ѵ�
		}
	}

}