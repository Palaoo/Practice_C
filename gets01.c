#include <stdio.h>

int main(void) {
	FILE* fp = stdin;
	int nAge = 0;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);

	char szName[12] = { 0 };
	printf("이름을 입력하세요: ");
	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);

	return 0;
}