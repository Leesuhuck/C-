#include "WeBank.h"
#include <iostream>
#include <cassert>
#include <vector>

//�Ա�
int WeBank::getonenum() {
	cho = cho + num;
	std::cout << "�Ա�" << std::endl;
	std::cout << cho<< "�� �ԱݵǾ����ϴ�." << std::endl;	
	return 0;
}

//���
int WeBank::gettwonum() {
	cho = cho - num;
	std::cout << "���" << std::endl;
	std::cout << cho <<"�� ��ݵǾ����ϴ�."<<std::endl;
	return 0;
}

//�ܾ���ȸ
int WeBank::getthreenum() {
	std::cout << "�ܾ���ȸ" << std::endl;
	std::cout << "���� ���� �ݾ��� " << cho << "�� �Դϴ�." << std::endl << std::endl;
	return 0;
}

void WeBank::setnum(int value)
{
		num = value;
		return 0;
}

int main()
{
	WeBank wh1;
	wh1.setnum(getline(std::cin, WeBank::num));

	//do while
}