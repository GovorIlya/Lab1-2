#include "Lab1.h"
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include <conio.h>
#include<string>
using namespace std;
//------------Конструкторы---------//
M::M() //конструктор без параметров
{
	kol = 0;
	s = 0;
	storage = new int[maxsize];
	size = size = maxsize;

}
M::M(int q) //конструктор с параметром
{

	storage = new int[maxsize];
	size = q;


}
M::M(const	M & w) //конструктор копирования
{
	storage = new int[maxsize];
	size = w.size;

	for (int i = 0; i<maxsize; i++)
		storage[i] = w.storage[i];

}
//---------Деструктор-------//
M::~M()
{
	for (int i = 0; i<maxsize; i++)
		delete[] storage;

}
//-----Методы------//
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
void M::addel()          //добавление элемента
{
	int w;

	for (int i = 0; i < size; i++) {
		w = print(i);
		storage[i] = w;
	}
	storage[size++] = rand() % 21 - 10;
	this->printall();

}

int M::amount() //количество элементов в множестве
{

	for (int i = 0; i < size; ++i)
		kol++;
	cout << kol << endl;;
	return kol;

}
int M::sum()   //сумма элементов в множестве
{
	for (int i = 0; i < size; i++)
		s += storage[i];
	return s;
}
bool M::check() //проверяем есть ли отрицательные элементы
{
	for (int i = 0; i < size; i++)
	{
		if (storage[i] < 0)
			return true;
	}

}

void M::delel()   //удаление элемента
{
	size--;
	this->printall();
}
