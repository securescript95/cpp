#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class Triangle {
    double a, b, c;

public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {
        if (a <= 0 || b <= 0 || c <= 0)
            throw invalid_argument("Sides must be positive");
        if (a + b <= c || a + c <= b || b + c <= a)
            throw invalid_argument("Triangle inequality violated");
    }

    double area() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }
};