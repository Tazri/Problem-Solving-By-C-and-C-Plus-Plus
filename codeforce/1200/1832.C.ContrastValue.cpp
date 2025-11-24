// link : https://codeforces.com/problemset/problem/1832/C
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

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    vector<int> av;
    av.reserve(n);
    av.push_back(v[0]);
    av.push_back(v[1]);

    for (int i = 2; i < n; i++)
    {
        int a = av[av.size() - 2];
        int b = av[av.size() - 1];
        int c = v[i];

        if (a >= b && b >= c)
            av.back() = c;
        else if (a <= b && b <= c)
            av.back() = c;
        else
            av.push_back(c);
    }

    int d = 0;
    for (int i = 0; i < av.size() - 1; i++)
        d += abs(av[i] - av[i + 1]);
    if (d == 0)
    {
        cout << 1 << endl;
        return;
    }

    cout << av.size() << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}