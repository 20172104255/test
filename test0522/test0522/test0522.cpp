// test0522.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Clength
{
public:
	double feet;
	double inch;
	double feet1;
	double inch1;
	int a;
	double feet2;
	double inch2;
	double inch3;
	void init(double f, double i)
	{
		feet = f; inch = i;
		i = f / 12;
		f = f - i * 12;
	}
	void setvalue(double meter)
	{
		feet = meter*3.2808399;
		inch = (feet - (int)feet) * 12;
		cout << "f=" << feet << "i=" << inch << endl;
	}
	void import()
	{
		inch2 = inch + inch1;
		if (inch2 >= 12)
		{
			a = inch2 / 12;
			inch3 = inch2 - a;
		}
		feet2 = feet + feet1 + a;
		cout << "f=" << feet2 << "i=" << inch3 << endl;
	}
	void display()
	{
		cout << "f=" << feet << "i=" << inch << endl;
	}
};
int main()
{
	Clength oc;
	oc.setvalue(10);
	oc.import();
	oc.display();
	return 0;
}
