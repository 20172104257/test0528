// test0528.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inche;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & ojbk);
	CFeet operator-(CFeet &ojbk);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inche = in % 12;
}
void CFeet::display()
{
	if (inche < 0)
	{
		feet=feet - 1;
		inche = 12+inche;
	}
	cout << feet << "Ӣ��" << inche << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet &ojbk)
{
	CFeet temp;
	temp.setvalue(feet-ojbk.feet, inche -ojbk.inche);
	return temp;
}
CFeet CFeet::operator-(CFeet &ojbk)
{
	CFeet temp;
	temp.setvalue(feet - ojbk.feet, inche - ojbk.inche);
	return temp;
}
int main()
{
	CFeet a, b, c;
	a.setvalue(2, 1);
	b.setvalue(1, 2);
	c = a - b;
	c.display();
    return 0;
}

