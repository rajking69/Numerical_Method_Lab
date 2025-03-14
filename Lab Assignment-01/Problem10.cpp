#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x * x * x - 6 * x + 4; 
}
double f_prime(double x)
{
    return 3 * x * x - 6;
}
void newtonRaphsonWithDeflation(double x0, double tol)
{
    while (true)
    {
        double x1 = x0 - f(x0) / f_prime(x0);
        if (abs(x1 - x0) < tol)
            break;
        x0 = x1;
    }
    cout << "Root found: " << setprecision(3) << x0 << endl;
}
int main()
{
    double tol = 0.001;
    newtonRaphsonWithDeflation(2, tol);
    newtonRaphsonWithDeflation(1, tol);
    newtonRaphsonWithDeflation(-3, tol);
    return 0;
}
