#include <stdio.h>

int main(void) {
	FILE* fp = stdin;
	int nAge = 0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &nAge);

	char szName[12] = { 0 };
	printf("�̸��� �Է��ϼ���: ");
	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);

	return 0;
}