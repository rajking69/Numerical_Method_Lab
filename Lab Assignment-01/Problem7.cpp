#include <bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x * x * x - x + 2;
}

int main()
{
    double x1 = 1, x2 = 3, tol = 0.001, x0;
    vector<double> list1;

    x0 = x1 - (func(x1) * (x2 - x1)) / (func(x2) - func(x1));
    list1.push_back(x0);

    int count = 0, i = 1;
    while (true)
    {
        x0 = x1 - (func(x1) * (x2 - x1)) / (func(x2) - func(x1));
        list1.push_back(x0);
        if (func(x0) * func(x1) < 0)
            x2 = x0;
        else
            x1 = x0;
        if (fabs(list1[i] - list1[i - 1]) < tol)
            count++;
        else
            count = 0;
        i++;
        if (count == 2)
            break;
    }
    printf("%.3f\n", x0);
    cout << (int)round(x0);
    return 0;
}
