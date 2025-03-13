#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Define the function f(x) = x^3 - 9x + 1
double f(double x)
{
    return x * x * x - 9 * x + 1;
}

int main()
{
    // Initial bracket [a, b] where f(a) * f(b) < 0
    // Check f(0) = 1 (positive), f(1) = -7 (negative)
    // so the root is indeed between 0 and 1
    double a = 0.0;
    double b = 1.0;
    double mid;

    // Perform bisection for a sufficient number of iterations
    // Each iteration halves the interval [a, b].
    // 20-30 iterations are already more than enough for 3 decimal places,
    // but we use 50 here for extra safety.
    for (int i = 0; i < 50; i++)
    {
        mid = (a + b) / 2.0; // midpoint
        if (f(a) * f(mid) < 0)
        {
            // The root lies between a and mid
            b = mid;
        }
        else
        {
            // The root lies between mid and b
            a = mid;
        }
    }

    // Output the approximate root with 3 decimal places
    cout << fixed << setprecision(3) << mid << endl;
    return 0;
}
