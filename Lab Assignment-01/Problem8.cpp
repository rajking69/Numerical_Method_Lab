#include <bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x * x * x - 5 * x * x - 29;
}

int main()
{
    double x1 = 4, x2 = 2, tol = 0.001, x3;
    while (true)
    {
        x3 = ((func(x2) * x1) - (func(x1) * x2)) / (func(x2) - func(x1));
        x3 = round(x3 * 1000.0) / 1000.0;
        if (fabs(x3 - x2) > tol)
        {
            x1 = x2;
            x2 = x3;
        }
        else
        {
            cout << fixed << setprecision(3) << x3 << endl;
            break;
        }
    }
    return 0;
}
