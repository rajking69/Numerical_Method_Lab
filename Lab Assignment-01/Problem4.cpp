#include <bits/stdc++.h>
using namespace std;

double func(double x) {
    return (x * x * x) - (9 * x) + 1;
}

int main() {
    double a = 0, b = 1, mid = 0;
    if (func(a) * func(b) == 0) {
        cout << "root exits in func(a) or func(b)" << endl;
    } else if (func(a) * func(b) > 0) {
        cout << "wrong value choosen for a and b" << endl;
    } else {
        while (b - a >= 0.01) {
            mid = (a + b) / 2.0;
            if (func(mid) * func(a) < 0)
                b = mid;
            else
                a = mid;
            printf("%.3f\n", mid);
        }
    }
    return 0;
}
