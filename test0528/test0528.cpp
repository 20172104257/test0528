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
	CFeet operator+(CFeet &ojbk);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inche = in % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inche << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet &ojbk)
{
	CFeet temp;
	temp.setvalue(feet + ojbk.feet, inche + ojbk.inche);
	return temp;
}
CFeet CFeet::operator+(CFeet &ojbk)
{
	CFeet temp;
	temp.setvalue(feet + ojbk.feet, inche + ojbk.inche);
	return temp;
}
int main()
{
	CFeet a, b, c;
	a.setvalue(10, 7);
	b.setvalue(4, 5);
	c = a + b;
	c.display();
    return 0;
}

