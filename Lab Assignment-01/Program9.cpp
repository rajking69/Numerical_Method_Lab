#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> p = {1, -5, 10, -8};
    int root = 2;
    vector<int> q;
    q.push_back(0);
    for (int i = 0; i < p.size() - 1; i++)
    {
        q.push_back(p[i] + q[i] * root);
    }

    cout << "q(x)= ";
    int power = root;
    for (int i = 1; i < q.size() - 1; i++)
    {
        cout << "(" << q[i] << "*x^" << power << ")+";
        power--;
    }
    cout << "(" << q[q.size() - 1] << ")" << endl;
    return 0;
}
