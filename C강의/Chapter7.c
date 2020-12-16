#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//재귀 함수를 이용한 팩토리얼
// 5 : 1* 2 *3 * 4 * 5 = 120
// 팩토리얼 : 자기 자신까지 모든 숫자를 곱한 결과
// 반복문을 사용하지 않아 좀 더 간결하게 나타낼수있음
// 재귀함수인지 아닌지 구별방법 자기 함수명이 자기 몸통안에 들어가있는지?
int factorial(int a) {

	if (a == 1)
		return 1;
	else
		return a * factorial(a - 1);
}

int main(void) {
	
	int n;
	printf("n 팩토리얼을 계산합니다. ");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;

}