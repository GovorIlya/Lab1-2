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
	cout << "Множество A:" << endl;
	a[0].setsize(10);
	a[0].randomfill();
	a[0].printall();

	cout << "Множество B:" << endl;
	a[1].setsize(10);
	a[1].randomfill();
	a[1].printall();

	cout << "Множество C:" << endl;
	a[2].setsize(10);
	a[2].randomfill();
	a[2].printall();



	cout << "--------------Меню-----------------" << endl;
	cout << "1 - Добавить элемент ко множеству" << endl;
	cout << "2 - Удалить элемент из множества" << endl;
	cout << "3 - Показать элементы множества" << endl;
	cout << "4 - Показать количество элементов множества" << endl;
	cout << "5 - Вывести множества снаименьшей суммой элементов" << endl;
	cout << "6 - Вывести множества с наибольшей суммой множества " << endl;
	cout << "7 - Список множеств содержащих отрицательыне элементы" << endl;
	cout << "8 - Список равных множеств" << endl;
	cout << "0 - Выход" << endl;

	int k, l, j, h;

	do
	{
		cout << "==========================================" << endl;
		cout << "Выберите действие : " << endl;
		cin >> choise;

		switch (choise)
		{
		case 1: cout << "Выбериете к какому множеству добавить (1-множество A, 2-множество B, 3-множество C): " << endl;
			cin >> k;
			if (k == 1) {
				cout << "множество A: " << endl;
				a[0].addel();
			}
			if (k == 2) {
				cout << "множество B: " << endl;
				a[1].addel();
			}
			if (k == 3) {
				cout << "множество C: " << endl;
				a[2].addel();
			} break;
		case 2:cout << "Выбериете из какого множества удалить (1-множество A, 2-множество B, 3-множество C): " << endl;
			cin >> l;
			if (l == 1) {
				cout << "множество A: " << endl;
				a[0].delel();
			}
			if (l == 2) {
				cout << "множество B: " << endl;
				a[1].delel();
			}
			if (l == 3) {
				cout << "множество C: " << endl;
				a[2].delel();
			} break;
		case 3:cout << "Выбериете какоt множество показать (1-множество A, 2-множество B, 3-множество C): " << endl;
			cin >> j;
			if (j == 1) {
				cout << "множество A: " << endl;
				a[0].printall();
			}
			if (j == 2) {
				cout << "множество B: " << endl;
				a[1].printall();
			}
			if (j == 3) {
				cout << "множество C: " << endl;
				a[2].printall();
			} break;
		case 4:cout << "Выберите множество (1-множество A, 2-множество B, 3-множество C): " << endl;
			cin >> h;
			if (h == 1) {
				cout << "Количетсво элементов множества A: " << endl;
				a[0].amount();
			}
			if (h == 2) {
				cout << "Количетсво элементов множества B: " << endl;
				a[1].amount();
			}
			if (h == 3) {
				cout << "Количество элементов множества C: " << endl;
				a[2].amount();
			}  break;
		case 5:cout << "Множество с наименьшей суммой : " << endl;
			int z, x, c;
			z = a[0].sum();
			x = a[1].sum();
			c = a[2].sum();
			if (z < x && z < c) cout << "A, сумма которого = " << z << endl;
			else if (x<z && z<c)  cout << "B, сумма которого = " << x << endl;
			else if (c<z && c<x)  cout << "C, сумма которого = " << c << endl;
			else if (z == x && z < c) cout << "A и B, сумма каждого из них = " << z << endl;
			else if (z == c && z < x)cout << "A и C, сумма каждого из них = " << z << endl;
			else if (x == c && x < z) cout << "B и C, сумма каждого из них =  " << x << endl;
			break;
		case 6:cout << "Множество с наибольшей суммой : " << endl;
			int v, b, n;
			v = a[0].sum();
			b = a[1].sum();
			n = a[2].sum();
			if (v > b && v > n) cout << "A, сумма которого = " << v << endl;
			else if (b > v && b > n)  cout << "B, сумма которого = " << b << endl;
			else if (n > v && n > b)  cout << "C, сумма которого = " << n << endl;
			else if (v == b && v > n) cout << "A и B, сумма каждого из них = " << v << endl;
			else if (v == n && v > b)cout << "A и C, сумма каждого из них = " << v << endl;
			else if (b == n && b > v) cout << "B и C, сумма каждого из них =  " << b << endl;
			break;
		case 7:cout << "Множества содержащие отрицательные элементы : " << endl;
			if (a[0].check() == true)
				cout << "A" << endl;
			if (a[1].check() == true)
				cout << "B" << endl;
			if (a[0].check() == true)
				cout << "C" << endl;
			else cout << "Таких множеств нету" << endl;;
			break;
		case 8:cout << "Список равных множеств : " << endl;
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
			else cout << "Равных множеств нет " << endl;
			break;

		}
	} while (choise != 0);
	system("pause");


	return 0;
}
