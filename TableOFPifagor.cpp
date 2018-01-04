/*таблица Пифагора
*/

#include <iostream>

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	cout << "\t     Таблица Пифагора:" << endl << endl << "    ";
	for (int i = 1; i <= 10; i++) printf("|%3d", i);
	cout <<"|"<< endl;
	for (int i = 1, product; i <= 10; i++) {
		if (i != 0) printf("  %2d|", i);
		for (int j = 1; j <= 10; j++) {
			product = i*j;
			printf("%3d|", product);
		}
		cout << endl ;
	}
	cout << endl;
	system("pause");
}
