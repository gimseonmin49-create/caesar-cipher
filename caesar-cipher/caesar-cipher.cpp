#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c;
	int key;

	printf("글자 하나(대문자): ");
	scanf(" %c", &c);
	printf("미는 칸 수: ");
	scanf("%d", &key);

	char result = 'A' + (c - 'A' + key) % 26;
	printf("암호화: %c\n", result);
	return 0;
}