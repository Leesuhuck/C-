#pragma once
#include <iostream>

class Student {
private:
	int id;
	int max;
	int min;
public:
	Student(int id);
	~Student();
	void setMax(int max) ;
	int getMax() const;
	int getMin()const;
	int getId() const;
	void setMin(int min);
	int getavg() const;
};

Student::Student(int i) : id(i){ //생성자 정의(명시적)

}

Student::~Student() {
	std::cout << id << "객체가 죽었습니다." << std::endl;
}

void Student::setMax(int max) {
	this->max = max;
}

int Student::getMax() const {
	return max;
}

void Student::setMin(int min) {
	this->min = min;
}
int Student::getMin()const {
	return min;
}

int Student::getId()const {
	return id;
}

int Student::getavg() const {
	return (max + min) / 2;
}
