#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(int argc, char* argv[])

{
    setlocale(LC_ALL, "RUSSIAN");

    //Перший приклад
    cout << "Перший приклад" << endl;
    int* x = new int;
    *x = 9;
        cout << "змынна х = " << *x << endl;
    delete x;
    cout << endl;
  
    //Другий приклад
    cout << "Другий приклад" << endl;
    srand(time(NULL)); 
    float *mas = new float[10];
    for (int i = 0; i < 10; i++) {
        mas[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }
        cout << "mas = " << endl;
        for (int i = 0; i < 10; i++) {
            cout << setprecision(2) << mas[i] << endl;
        }
    delete[] mas; 
    cout << endl;

    //Третій приклад
    cout << "Третый приклад" << endl;
    float **mass = new float* [2]; 
    for (int count = 0; count < 2; count++) {
        mass[count] = new float[5];
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            mass[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << '\t' << setprecision(2) << mass[i][j] << '\t';
            cout << endl;
        }
    }
    
    for (int count = 0; count < 2; count++) {
        delete[] mass [count];
    }
    return 0;
}
