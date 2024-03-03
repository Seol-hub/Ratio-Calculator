#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {

	char buffer[SIZE];
	int input, a, b, c, d, max;

	while (1) {
		printf("(1) ū ������ ��ȯ (2) �ܼ� ������ ��ȯ (3) ����\n");
		printf("Do: ");
		scanf("%d", &input);
		if (input == 3) break;
		if (input == 1) {
			printf("< ū ������ ��ȯ >\n��ȯ�� ���� (a:b) = ");
			scanf("%s", &buffer);
			sscanf(buffer, "%d:%d", &a, &b);
			printf("���� �ִ� ũ��: ");
			scanf("%d", &max);
			if (a > b) c = max / a;
			else c = max / b;
			sprintf(buffer, "��ȯ ���� = %d : %d\n", a * c, b * c);
			printf("%s\n", buffer);
		}
		if (input == 2) {
			printf("< ���� ������ ��ȯ >\n��ȯ�� ���� (a:b) = ");
			scanf("%s", &buffer);
			sscanf(buffer, "%d:%d", &a, &b);
			d = gcd(a, b);
			sprintf(buffer, "��ȯ ���� = %d : %d\n", a / d, b / d);
			printf("%s\n", buffer);
		}
	}

	return 0;
}