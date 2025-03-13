#include <bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x * x * x - 6 * x + 4;
}

int main()
{
    double a[] = {-3, 0, 1};
    double b[] = {-2, 1, 2};
    double mid = 0;

    for (int i = 0; i < 3; i++)
    {
        double x = a[i];
        double y = b[i];
        if (func(x) * func(y) == 0)
        {
            cout << "root exists in func(a) or func(b)" << endl;
        }
        else if (func(x) * func(y) > 0)
        {
            cout << "wrong value chosen for a and b" << endl;
        }
        else
        {
            while (y - x >= 0.01)
            {
                mid = (x + y) / 2.0;
                if (func(mid) * func(x) < 0)
                    y = mid;
                else
                    x = mid;
            }
            printf("%.3f\n", mid);
        }
    }
    return 0;
}
