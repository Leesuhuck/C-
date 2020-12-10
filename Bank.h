#pragma once
#include <string>
#include <iostream>

class Bank
{
private:

	int ParsonOneMoney;
	std::string ParsonOneID;

public:

	void deposit(std::string id); //입금
	void withdraw(void); //출금
	void balance(void); // 잔액
		//종료?

	Bank(int Money, std::string ID) {
		ParsonOneMoney = Money;
		ParsonOneID = ID;
	}

	void setBankOne() {
		int a;
		std::string c;
		std::cout << "사용자의 계좌번호를 입력하세요 : ";
		std::cin >> a;
		ParsonOneMoney == a;
		std::cout << "사용자의 계좌번호를 입력하세요 : ";
		std::cin >> c;
		ParsonOneID == c;
	}
	int getBankOneMoney() {
		return ParsonOneMoney;
	}

	std::string getBankOneID() {
		return ParsonOneID;
	}
};

class BankTwo
{
private:

	int ParsonTwoMoney;
	std::string ParsonTwoID;

public:

	void deposit2(void); //입금
	void withdraw2(void); //출금
	void balance2(void); // 잔액
	//종료?

	BankTwo(int Money, std::string ID) {

		ParsonTwoMoney = Money;
		ParsonTwoID = ID;

	}

	void setBankTwo() {

		int a;
		std::string c;
		std::cout << "사용자의 계좌번호를 입력하세요 : ";
		std::cin >> a;
		ParsonTwoMoney = a;
		std::cin >> ParsonTwoMoney;
		std::cout << "사용자의 계좌번호를 입력하세요 : ";
		std::cin >> c;
		ParsonTwoID = c;

	}
	int getBankTwoMoney() {

		return ParsonTwoMoney;

	}

	std::string getBankTwoID() {

		return ParsonTwoID;

	}
};



//입금들
void Bank::deposit(std::string id) { //해결함
	int copyMoney;
	if (id== ParsonOneID) {
		std::cout << "=======처리결과========" << std::endl;
		std::cout << "Account : " << ParsonOneID << std::endl;
		std::cout << "Transaction : " << copyMoney << std::endl;
		std::cout << "New Balance : " << ParsonOneMoney + copyMoney << std::endl;
		
	}
	else {

	}
	copyMoney = 0;
}

void BankTwo::deposit2(void) {

	std::string copyID;
	int copyMoney;
	if (copyID == ParsonTwoID) {
		std::cout << "=======처리결과========" << std::endl;
		std::cout << "Account : " << ParsonTwoID << std::endl;
		std::cout << "Transaction : " << copyMoney << std::endl;
		std::cout << "New Balance : " << ParsonTwoMoney + copyMoney << std::endl;
		
	}
	else {

	}
	copyMoney = 0;
}

// 출금
void Bank::withdraw(void) {

	std::string copyID;
	int drawMoney;
	if (copyID == ParsonOneID) {
		std::cout << "=======처리결과========" << std::endl;
		std::cout << "Account : " << ParsonOneID << std::endl;
		std::cout << "Transaction : " << drawMoney << std::endl;
		std::cout << "New Balance : " << ParsonOneMoney - drawMoney << std::endl;
		
	}
	else {
		std::cout << "계좌번호가 잘못되었습니다." << std::endl;
	}
	drawMoney = 0;
}

void BankTwo::withdraw2(void) {

	std::string copyID;
	int drawMoney;
	if (copyID == ParsonTwoID) {
		std::cout << "=======처리결과========" << std::endl;
		std::cout << "Account : " << ParsonTwoID << std::endl;
		std::cout << "Transaction : " << drawMoney << std::endl;
		std::cout << "New Balance : " << ParsonTwoMoney - drawMoney << std::endl;
		
	}
	else {
		std::cout << "계좌번호가 잘못되었습니다." << std::endl;
	}
	drawMoney = 0;
}

//잔액
void Bank::withdraw(void) {

	std::string copyID;
	if (copyID == ParsonOneID) {
		std::cout << "=======처리결과========" << std::endl;
		std::cout << "Account : " << ParsonOneID << std::endl;
		std::cout << "Transaction : balance" << std::endl;
		std::cout << "New Balance : " << ParsonOneMoney << std::endl;
	}
	else {
		std::cout << "계좌번호가 잘못되었습니다." << std::endl;
	}

}
//만드는거 까지는 좋은데 어떻게 키값을 한번만 으로 구별할지를 생각못했다;
//메인에서는 속성,