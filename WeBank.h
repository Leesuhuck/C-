#pragma once
#include <iostream>
#include <cassert>
class WeBank
{
	private :
		static int num;
	public :
		static int cho;
		int getonenum();
		int gettwonum();
		int getthreenum();
		void setnum(int value);
		void setnum();
};

