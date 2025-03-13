#include <bits/stdc++.h>
using namespace std;

double func1(double x)
{
    return x * x * x - 6 * x + 4;
}

double func2(double x)
{
    return 3 * x * x - 6;
}

double newtonRaphson(double x, double tol = 0.001)
{
    while (true)
    {
        double x1 = x - (func1(x) / func2(x));
        if (fabs(x1 - x) < tol)
            return x1;
        x = x1;
    }
}

int main()
{
    double initial_guess = 0.0;
    double root = newtonRaphson(initial_guess);
    printf("%.3f\n", root);
    return 0;
}
