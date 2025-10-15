// https://codeforces.com/problemset/problem/996/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int cash;
    cin >> cash;

    int note = 0;
    vector<int> types = {100, 20, 10, 5, 1};

    for (int n : types)
    {
        note += (cash / n);
        cash %= n;
    }

    cout << note << endl;
    return 0;
}