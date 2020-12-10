#include "Bank.h"
int main() {
	Bank B;
	B.setBankOne();
	std::cout << "Account" << B.getBankOneMoney() << "is opened" << std::endl;
	std::cout << "Balance" << B.getBankOneID() << std::endl;

	BankTwo BT;
	BT.setBankTwo();
	std::cout << "Account" << BT.getBankTwoMoney() << "is opened" << std::endl;
	std::cout << "Balance" << BT.getBankTwoID() << std::endl;
	
	B.deposit();
	BT.deposit2();

}