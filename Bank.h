#pragma once
#include <string>
#include <iostream>

class Bank
{
private:

	int ParsonOneMoney;
	std::string ParsonOneID;

public:

	void deposit(std::string id); //�Ա�
	void withdraw(void); //���
	void balance(void); // �ܾ�
		//����?

	Bank(int Money, std::string ID) {
		ParsonOneMoney = Money;
		ParsonOneID = ID;
	}

	void setBankOne() {
		int a;
		std::string c;
		std::cout << "������� ���¹�ȣ�� �Է��ϼ��� : ";
		std::cin >> a;
		ParsonOneMoney == a;
		std::cout << "������� ���¹�ȣ�� �Է��ϼ��� : ";
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

	void deposit2(void); //�Ա�
	void withdraw2(void); //���
	void balance2(void); // �ܾ�
	//����?

	BankTwo(int Money, std::string ID) {

		ParsonTwoMoney = Money;
		ParsonTwoID = ID;

	}

	void setBankTwo() {

		int a;
		std::string c;
		std::cout << "������� ���¹�ȣ�� �Է��ϼ��� : ";
		std::cin >> a;
		ParsonTwoMoney = a;
		std::cin >> ParsonTwoMoney;
		std::cout << "������� ���¹�ȣ�� �Է��ϼ��� : ";
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



//�Աݵ�
void Bank::deposit(std::string id) { //�ذ���
	int copyMoney;
	if (id== ParsonOneID) {
		std::cout << "=======ó�����========" << std::endl;
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
		std::cout << "=======ó�����========" << std::endl;
		std::cout << "Account : " << ParsonTwoID << std::endl;
		std::cout << "Transaction : " << copyMoney << std::endl;
		std::cout << "New Balance : " << ParsonTwoMoney + copyMoney << std::endl;
		
	}
	else {

	}
	copyMoney = 0;
}

// ���
void Bank::withdraw(void) {

	std::string copyID;
	int drawMoney;
	if (copyID == ParsonOneID) {
		std::cout << "=======ó�����========" << std::endl;
		std::cout << "Account : " << ParsonOneID << std::endl;
		std::cout << "Transaction : " << drawMoney << std::endl;
		std::cout << "New Balance : " << ParsonOneMoney - drawMoney << std::endl;
		
	}
	else {
		std::cout << "���¹�ȣ�� �߸��Ǿ����ϴ�." << std::endl;
	}
	drawMoney = 0;
}

void BankTwo::withdraw2(void) {

	std::string copyID;
	int drawMoney;
	if (copyID == ParsonTwoID) {
		std::cout << "=======ó�����========" << std::endl;
		std::cout << "Account : " << ParsonTwoID << std::endl;
		std::cout << "Transaction : " << drawMoney << std::endl;
		std::cout << "New Balance : " << ParsonTwoMoney - drawMoney << std::endl;
		
	}
	else {
		std::cout << "���¹�ȣ�� �߸��Ǿ����ϴ�." << std::endl;
	}
	drawMoney = 0;
}

//�ܾ�
void Bank::withdraw(void) {

	std::string copyID;
	if (copyID == ParsonOneID) {
		std::cout << "=======ó�����========" << std::endl;
		std::cout << "Account : " << ParsonOneID << std::endl;
		std::cout << "Transaction : balance" << std::endl;
		std::cout << "New Balance : " << ParsonOneMoney << std::endl;
	}
	else {
		std::cout << "���¹�ȣ�� �߸��Ǿ����ϴ�." << std::endl;
	}

}
//����°� ������ ������ ��� Ű���� �ѹ��� ���� ���������� �������ߴ�;
//���ο����� �Ӽ�,