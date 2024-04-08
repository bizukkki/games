#include <iostream>

using namespace std;

int geom()
{
    int num[10];
    num[0] = rand() % 6 + 1;
    int missed = rand() % 11;
    int a = rand() % 11 + 2;
    cout << "What numer is missing in the progression?\nQuestion: ";
    for (int i = 1; i < 10; i++) {
         num[i] = num[i - 1] * a;
         if (i != missed)
             cout << num[i] << " ";
         else
             cout << "... ";   
    }
    return num[missed];
}