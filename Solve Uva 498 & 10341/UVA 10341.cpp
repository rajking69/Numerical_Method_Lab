#include <bits/stdc++.h>
using namespace std;

double f(double x, double p, double q, double r, double s, double t, double u)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main()
{
    double p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        double low = 0.0, high = 1.0;
        if (f(low, p, q, r, s, t, u) * f(high, p, q, r, s, t, u) > 0)
        {
            cout << "No solution" << "\n";
            continue;
        }
        for (int i = 0; i < 100; i++)
        {
            double mid = (low + high) / 2.0;
            if (f(mid, p, q, r, s, t, u) > 0)
                low = mid;
            else
                high = mid;
        }
        cout << fixed << setprecision(4) << (low + high) / 2.0 << "\n";
    }
    return 0;
}
