// ����ڷκ��� ������ ��(second)�� �Է¹޾� '��:��:��' �������� ����ϴ� ���α׷��� �ۼ��մϴ�. 
// ��, �� ��, ��, �ʴ� ��� �� �ڸ� ������ ǥ�õǾ�� �ϸ� �� �ڸ� ������ ��� �տ� 0�� �ٿ� ����ؾ� �մϴ�.

#include <stdio.h>

int main(void) {
	int input;
	scanf_s("%d", &input);

	int hour = input / 3600;
	int min = (input - hour * 3600) / 60;
	int second = (input - hour * 3600 - min * 60);

	printf("%d�ʴ� %02d:%02d:%02d �Դϴ�.", input, hour, min, second);

	return 0;
}