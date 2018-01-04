/*3.	
4.	Когда в комнате развелось уже N мух, 
Петро Петрович открыл квартирку и, размахивая 
полотенцем, начал выгонять их на улицу. 
На выгон одной мухи он затрачивал 1 минуту, 
но через каждых 5 минут в комнату залетала новая муха. 
Когда в комнате стало меньше, чем 10% от 
начального количества мух, процесс борьбы с
мухами ускорился вдвое. Сколько мух 
осталось в комнате через K минут? Через 
сколько минут Петро Петрович остался в комнате один?
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
