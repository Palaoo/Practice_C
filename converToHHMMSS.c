// 사용자로부터 정수로 초(second)를 입력받아 '시:분:초' 형식으로 출력하는 프로그램을 작성합니다. 
// 단, 각 시, 분, 초는 모두 두 자리 정수로 표시되어야 하며 한 자리 숫자인 경우 앞에 0을 붙여 출력해야 합니다.

#include <stdio.h>

int main(void) {
	int input;
	scanf_s("%d", &input);

	int hour = input / 3600;
	int min = (input - hour * 3600) / 60;
	int second = (input - hour * 3600 - min * 60);

	printf("%d초는 %02d:%02d:%02d 입니다.", input, hour, min, second);

	return 0;
}