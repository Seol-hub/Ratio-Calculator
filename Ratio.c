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
		printf("(1) 큰 비율로 변환 (2) 단순 비율로 변환 (3) 종료\n");
		printf("Do: ");
		scanf("%d", &input);
		if (input == 3) break;
		if (input == 1) {
			printf("< 큰 비율로 변환 >\n변환할 비율 (a:b) = ");
			scanf("%s", &buffer);
			sscanf(buffer, "%d:%d", &a, &b);
			printf("비율 최대 크기: ");
			scanf("%d", &max);
			if (a > b) c = max / a;
			else c = max / b;
			sprintf(buffer, "변환 비율 = %d : %d\n", a * c, b * c);
			printf("%s\n", buffer);
		}
		if (input == 2) {
			printf("< 작은 비율로 변환 >\n변환할 비율 (a:b) = ");
			scanf("%s", &buffer);
			sscanf(buffer, "%d:%d", &a, &b);
			d = gcd(a, b);
			sprintf(buffer, "변환 비율 = %d : %d\n", a / d, b / d);
			printf("%s\n", buffer);
		}
	}

	return 0;
}