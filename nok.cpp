#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int nok(int a, int b, int c) {
    int m = max(max(a, b), c);
    for (long i = m; i <= a * b * c; i++) {
        if (i % a == 0 && i % b == 0 && i % c == 0)
            return i;
    }
}
int nokgame() {
    cout << "Fing the smallest common multiple of given numbers.\nQuestion: ";
    int a = rand() % 51 + 2;
    int b = rand() % 51 + 2;
    int c = rand() % 51 + 2;
    cout << a << " " << b << " " << c << "\n";
    return nok(a, b, c);
}