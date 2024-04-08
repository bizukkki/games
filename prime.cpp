#include <iostream>

using namespace std;

int pr(int a) {

    for (int i = 3; i < a; i++)
        if (a % i == 0)
            return 0;
    return 1;
}
int prime() {
        int a = rand() % 1000 + 3;
        cout << "If given number is prime answer '1', otherwise answer '0'.\nQuestion: " << a;
        return pr(a);
}