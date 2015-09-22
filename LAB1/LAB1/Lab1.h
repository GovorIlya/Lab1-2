#pragma once
#pragma once
#include <iostream> 
#include <ctime> 
#include<string>

class M
{
	int s;
	int kol;
	int *storage;
	int size;
	static const int maxsize = 30;
public:
	M();
	M(int q);
	M(const	M &);
	~M();
	void setsize(int);
	int getsize();
	void printall();
	void randomfill();
	int amount();
	int sum();
	bool check();
	void addel();
	void delel();
	int print(int);
};

