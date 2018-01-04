/*2.	Написать программу, которая проверяет пользователя на знание таблицы умножения. 
Программа выводит на экран два числа, пользователь должен ввести их произведение. 
Разработать несколько уровней сложности (отличаются сложностью и количеством вопросов). 
Вывести пользователю оценку его знаний.
*/

#include <iostream>
#include <ctime>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	//int my = rand() % 500 + 1;
	int choice, num1, num2, product;
	do {
		cout << "Выберите уровень сложности: " <<  endl;
		cout << "1 - числа от 1 до 5, 2 вопроса " << endl;
		cout << "2 - числа от 0 до 10, 5 вопросов " << endl;
		cout << "3 - числа от 0 до 20, 7 вопросов " << endl;
		cin >> choice;
		
	} while (choice < 1 || choice>3);
	
	switch (choice)
	{
	case(1): for (int i = 0; i < 2; i++)
	{
		num1 = rand() % 5 + 1;
		num2 = rand() % 5 + 1;
		cout << num1 << " X " << num2 << "= ";
		cin >> product;
		if (product == num1*num2) cout << "Верно! " << num1 << " X " << num2 << " = " << product << endl;
		else cout << "Неверно! " << num1 << " X " << num2 << " = " << num1*num2 << endl;
	}	
		break;
	case(2): for (int i = 0; i < 5; i++)
	{
		num1 = rand() % 10 + 1;
		num2 = rand() % 10 + 1;
		cout << num1 << " X " << num2 << "= ";
		cin >> product;
		if (product == num1*num2) cout << "Верно! " << num1 << " X " << num2 << " = " << product << endl;
		else cout << "Неверно! " << num1 << " X " << num2 << " = " << num1*num2 << endl;
	}
			 break;
	case(3): for (int i = 0; i < 7; i++)
	{
		num1 = rand() % 20 + 1;
		num2 = rand() % 20 + 1;
		cout << num1 << " X " << num2 << "= ";
		cin >> product;
		if (product == num1*num2) cout << "Верно! " << num1 << " X " << num2 << " = " << product << endl;
		else cout << "Неверно! " << num1 << " X " << num2 << " = " << num1*num2 << endl;
	}
			 break;
	}

	
	system("pause");
}
