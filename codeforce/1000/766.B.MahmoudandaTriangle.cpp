// link : https://codeforces.com/problemset/problem/766/B
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

bool isPossible(int a, int b, int c)
{
    return (a + b) > c && (a + c) > b && (b + c) > a;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    for (int i = 2; i < n; i++)
        if (isPossible(v[i], v[i - 1], v[i - 2]))
        {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}