#include "Lab1.h"
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include <conio.h>
#include<string>
using namespace std;
//------------������������---------//
M::M() //����������� ��� ����������
{
	kol = 0;
	s = 0;
	storage = new int[maxsize];
	size = size = maxsize;

}
M::M(int q) //����������� � ����������
{

	storage = new int[maxsize];
	size = q;


}
M::M(const	M & w) //����������� �����������
{
	storage = new int[maxsize];
	size = w.size;

	for (int i = 0; i<maxsize; i++)
		storage[i] = w.storage[i];

}
//---------����������-------//
M::~M()
{
	for (int i = 0; i<maxsize; i++)
		delete[] storage;

}
//-----������------//
int M::getsize()
{
	return size;
}
void M::randomfill()
{

	for (int i = 0; i<size; i++)
		storage[i] = rand() % 21 - 10;

}
void  M::printall()
{
	for (int i = 0; i<size; i++)
		cout << storage[i] << " "; cout << endl;


}
int M::print(int i) {

	int q = storage[i];
	return q;


}

void M::setsize(int h)
{
	size = h;

}
void M::addel()          //���������� ��������
{
	int w;

	for (int i = 0; i < size; i++) {
		w = print(i);
		storage[i] = w;
	}
	storage[size++] = rand() % 21 - 10;
	this->printall();

}

int M::amount() //���������� ��������� � ���������
{

	for (int i = 0; i < size; ++i)
		kol++;
	cout << kol << endl;;
	return kol;

}
int M::sum()   //����� ��������� � ���������
{
	for (int i = 0; i < size; i++)
		s += storage[i];
	return s;
}
bool M::check() //��������� ���� �� ������������� ��������
{
	for (int i = 0; i < size; i++)
	{
		if (storage[i] < 0)
			return true;
	}

}

void M::delel()   //�������� ��������
{
	size--;
	this->printall();
}
