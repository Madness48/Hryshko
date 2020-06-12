#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
    srand(time(NULL));
    float k,sr = 0;
    float** mas = new float* [2];
    for (int i = 0; i < 2; i++) {
        mas[i] = new float[5];
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            k = (rand() % 201-101 );
            mas[i][j] = k / 100;
            sr = mas[i][j] + sr;
          
        }
    }
    

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    sr = sr / 10;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (mas[i][j] < (-0.5)) {
                mas[i][j] = sr;
            }
        }
    }
    cout << endl;
    cout << "sr= " << sr;
    cout << "\n";
    cout << endl;
   
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

        
}
