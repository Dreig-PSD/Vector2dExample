﻿// Vector2dEx.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2D.h"
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Vector2D v1(1, 4);
	Vector2D v2(5, 3);
	Vector2D v3(2, 4);
	cout << "Сумма.\n"<<string(v1)<<endl;
	cout << "+\n"<<string(v2)<<endl;
	cout << "=\n"<<string(v1+v2)<<endl;
	cout << "Разность.\n"<<string(v2)<<endl;
	cout << "-\n"<<string(v3)<<endl;
	cout << "=\n"<<string(v1-v3)<<endl;
	cout << "Скалярное умножение.\n"<<string(v2)<<endl;
	cout << "*\n"<<string(v3)<<endl;
	cout << "=\n"<<v2*v3<<endl;
	cout << "Умножение вектора на число.\n"<<string(v2)<<endl;
	cout << "*\n6\n";
	cout << "=\n" << string(v2 * 6)<<endl;
	cout << "Умножение числа на вектор.\n";
	cout << "6\n*\n"<<string(v2)<<endl;
	cout << "=\n" << string(6 * v2)<<endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
