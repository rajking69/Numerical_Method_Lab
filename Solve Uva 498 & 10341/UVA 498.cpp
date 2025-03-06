#include <bits/stdc++.h>
using namespace std;

vector<int> getList(const string &s)
{
    vector<int> numbers;
    stringstream iss(s);
    int num;
    while (iss >> num)
    {
        numbers.push_back(num);
    }
    return numbers;
}

long long evaluate(const vector<int> &digits, int base)
{
    long long result = 0;
    for (int d : digits)
    {
        result = result * base + d;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    while (getline(cin, s1))
    {
        if (s1.empty())
            continue;
        getline(cin, s2);
        vector<int> digits = getList(s1);
        vector<int> bases = getList(s2);
        for (size_t i = 0; i < bases.size(); i++)
        {
            if (i > 0)
                cout << " ";
            cout << evaluate(digits, bases[i]);
        }
        cout << "\n";
    }

    return 0;
}
