#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void) {

	char a = 65;
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

/*
int main(void) {

	//문자를 한개 입력받을때는 getchar()이라는 함수를 사용할수있다.
	// 단 하나의 문자를 입력받을때 사용
	char a = getchar();
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

//입력 버퍼로 인해 흔히 발생하는 오류
/*
컴퓨터는 줄바꿈이나 공백등도 전부 다 아스키 코드로 관리한다.
숫자를 입력하고 나서 엔터를 하면 숫자값은 A에 들가고 엔터는 줄바꿈 자체는
c로 들어가서 입력 버퍼 오류가 생긴다.

int main(void) {

	int a;
	char c;
	scanf("%d", &a);
	printf("%d\n", a);
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
}
*/

// 남아 있는 입력 버퍼를 항상 지울 수 있습니다.
/*
int main() {

	int a; char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	// 한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면 입력을 멈추므로 항상
	// 입력 버퍼를 비웁니다.
	while ((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
	
}
*/