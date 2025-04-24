#include <iostream>
#include <cstdlib>
using namespace std;

double factorial(int n) {
    double fact = 1;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

int main(int argc, char* argv[]) {
    int n;
    if (argc > 1) n = atoi(argv[1]);
    else {
        cout << "Enter value of n: ";
        cin >> n;
    }

    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        double term = 1.0 / factorial(i);
        if (i % 2 == 0) term *= -1;
        sum += term;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}