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

	//���ڸ� �Ѱ� �Է¹������� getchar()�̶�� �Լ��� ����Ҽ��ִ�.
	// �� �ϳ��� ���ڸ� �Է¹����� ���
	char a = getchar();
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

//�Է� ���۷� ���� ���� �߻��ϴ� ����
/*
��ǻ�ʹ� �ٹٲ��̳� ���� ���� �� �ƽ�Ű �ڵ�� �����Ѵ�.
���ڸ� �Է��ϰ� ���� ���͸� �ϸ� ���ڰ��� A�� �鰡�� ���ʹ� �ٹٲ� ��ü��
c�� ���� �Է� ���� ������ �����.

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

// ���� �ִ� �Է� ���۸� �׻� ���� �� �ֽ��ϴ�.
/*
int main() {

	int a; char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	// �� �ھ� �޾Ƽ� ������ ���̰ų� ���� ���ڸ� ������ �Է��� ���߹Ƿ� �׻�
	// �Է� ���۸� ���ϴ�.
	while ((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
	
}
*/