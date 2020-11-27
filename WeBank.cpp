#include "WeBank.h"
#include <iostream>
#include <cassert>
#include <vector>

//입금
int WeBank::getonenum() {
	cho = cho + num;
	std::cout << "입금" << std::endl;
	std::cout << cho<< "원 입금되었습니다." << std::endl;	
	return 0;
}

//출금
int WeBank::gettwonum() {
	cho = cho - num;
	std::cout << "출금" << std::endl;
	std::cout << cho <<"원 출금되었습니다."<<std::endl;
	return 0;
}

//잔액조회
int WeBank::getthreenum() {
	std::cout << "잔액조회" << std::endl;
	std::cout << "현재 남은 금액은 " << cho << "원 입니다." << std::endl << std::endl;
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