#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(int argc, char* argv[])
{
	srand(time(NULL));
	int *mas = new int[10];
	cout << "mas: ";
	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 10 + 1;
		cout << mas[i] << " ";
	}
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (mas[j] < mas[j + 1]) {
				int x = mas[j];
				mas[j] = mas[j+1];
				mas[j + 1] = x;
			}
		}
	}
	cout << endl;
	cout << "mas: ";
	for (int i = 0; i < 10; i++) {
		
		cout << mas[i] << " ";
	}
	delete[]mas;
	return 0;

}
