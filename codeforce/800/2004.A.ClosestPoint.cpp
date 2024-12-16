// link : https://codeforces.com/problemset/problem/2004/A

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

void test()
{
    int n;
    cin >> n;

    vector<int> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    if (n > 2)
    {
        cout << "NO" << endl;
        return;
    }

    if (points[1] - points[0] == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        test();
    }
    return 0;
}