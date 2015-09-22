#include "Lab1.h" 
#include <iostream>
#include <locale>
#include<string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int choise;
	srand(time(NULL));

	M *a = new M[3];
	cout << "��������� A:" << endl;
	a[0].setsize(10);
	a[0].randomfill();
	a[0].printall();

	cout << "��������� B:" << endl;
	a[1].setsize(10);
	a[1].randomfill();
	a[1].printall();

	cout << "��������� C:" << endl;
	a[2].setsize(10);
	a[2].randomfill();
	a[2].printall();



	cout << "--------------����-----------------" << endl;
	cout << "1 - �������� ������� �� ���������" << endl;
	cout << "2 - ������� ������� �� ���������" << endl;
	cout << "3 - �������� �������� ���������" << endl;
	cout << "4 - �������� ���������� ��������� ���������" << endl;
	cout << "5 - ������� ��������� ����������� ������ ���������" << endl;
	cout << "6 - ������� ��������� � ���������� ������ ��������� " << endl;
	cout << "7 - ������ �������� ���������� ������������� ��������" << endl;
	cout << "8 - ������ ������ ��������" << endl;
	cout << "0 - �����" << endl;

	int k, l, j, h;

	do
	{
		cout << "==========================================" << endl;
		cout << "�������� �������� : " << endl;
		cin >> choise;

		switch (choise)
		{
		case 1: cout << "��������� � ������ ��������� �������� (1-��������� A, 2-��������� B, 3-��������� C): " << endl;
			cin >> k;
			if (k == 1) {
				cout << "��������� A: " << endl;
				a[0].addel();
			}
			if (k == 2) {
				cout << "��������� B: " << endl;
				a[1].addel();
			}
			if (k == 3) {
				cout << "��������� C: " << endl;
				a[2].addel();
			} break;
		case 2:cout << "��������� �� ������ ��������� ������� (1-��������� A, 2-��������� B, 3-��������� C): " << endl;
			cin >> l;
			if (l == 1) {
				cout << "��������� A: " << endl;
				a[0].delel();
			}
			if (l == 2) {
				cout << "��������� B: " << endl;
				a[1].delel();
			}
			if (l == 3) {
				cout << "��������� C: " << endl;
				a[2].delel();
			} break;
		case 3:cout << "��������� ����t ��������� �������� (1-��������� A, 2-��������� B, 3-��������� C): " << endl;
			cin >> j;
			if (j == 1) {
				cout << "��������� A: " << endl;
				a[0].printall();
			}
			if (j == 2) {
				cout << "��������� B: " << endl;
				a[1].printall();
			}
			if (j == 3) {
				cout << "��������� C: " << endl;
				a[2].printall();
			} break;
		case 4:cout << "�������� ��������� (1-��������� A, 2-��������� B, 3-��������� C): " << endl;
			cin >> h;
			if (h == 1) {
				cout << "���������� ��������� ��������� A: " << endl;
				a[0].amount();
			}
			if (h == 2) {
				cout << "���������� ��������� ��������� B: " << endl;
				a[1].amount();
			}
			if (h == 3) {
				cout << "���������� ��������� ��������� C: " << endl;
				a[2].amount();
			}  break;
		case 5:cout << "��������� � ���������� ������ : " << endl;
			int z, x, c;
			z = a[0].sum();
			x = a[1].sum();
			c = a[2].sum();
			if (z < x && z < c) cout << "A, ����� �������� = " << z << endl;
			else if (x<z && z<c)  cout << "B, ����� �������� = " << x << endl;
			else if (c<z && c<x)  cout << "C, ����� �������� = " << c << endl;
			else if (z == x && z < c) cout << "A � B, ����� ������� �� ��� = " << z << endl;
			else if (z == c && z < x)cout << "A � C, ����� ������� �� ��� = " << z << endl;
			else if (x == c && x < z) cout << "B � C, ����� ������� �� ��� =  " << x << endl;
			break;
		case 6:cout << "��������� � ���������� ������ : " << endl;
			int v, b, n;
			v = a[0].sum();
			b = a[1].sum();
			n = a[2].sum();
			if (v > b && v > n) cout << "A, ����� �������� = " << v << endl;
			else if (b > v && b > n)  cout << "B, ����� �������� = " << b << endl;
			else if (n > v && n > b)  cout << "C, ����� �������� = " << n << endl;
			else if (v == b && v > n) cout << "A � B, ����� ������� �� ��� = " << v << endl;
			else if (v == n && v > b)cout << "A � C, ����� ������� �� ��� = " << v << endl;
			else if (b == n && b > v) cout << "B � C, ����� ������� �� ��� =  " << b << endl;
			break;
		case 7:cout << "��������� ���������� ������������� �������� : " << endl;
			if (a[0].check() == true)
				cout << "A" << endl;
			if (a[1].check() == true)
				cout << "B" << endl;
			if (a[0].check() == true)
				cout << "C" << endl;
			else cout << "����� �������� ����" << endl;;
			break;
		case 8:cout << "������ ������ �������� : " << endl;
			int q, w, e;
			q = a[0].sum();
			w = a[1].sum();
			e = a[2].sum();
			if (q == w)
				cout << "A = B" << endl;
			if (q == e)
				cout << "A = C" << endl;
			if (w == e)
				cout << "B = C" << endl;
			else cout << "������ �������� ��� " << endl;
			break;

		}
	} while (choise != 0);
	system("pause");


	return 0;
}
