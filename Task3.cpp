/*3.	
Вывести на экран числа от 100 до 999 с 
заданным шагом в заданное количество столбиков.
*/

#include <iostream>

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int step, numOfColumns;
	const int LOW=100, HIGH=999;
	do {
		cout << "Введите шаг чисел ";
		cin >> step;
		if (step<1 || step>(HIGH - LOW)) cout << "Некорректный шаг!\n";
	} while (step<1 || step>(HIGH-LOW));
	do {
		cout << "Введите количество столбцов ";
		cin >> numOfColumns;
		if (numOfColumns<1 || numOfColumns>(HIGH - LOW)) cout << "Некорректное количество столбцов!\n";
	} while (numOfColumns<1 || numOfColumns>(HIGH - LOW));
	
	for (int i = LOW; i < HIGH; )
	for (int j = 1; j <= numOfColumns; j++)
		{
			cout << i << " ";
			i += step;
			if (j == numOfColumns)cout << endl;
			if (i >= HIGH) goto fin;
		}
fin:
	cout << endl;
	

	system("pause");
}
