// link : https://codeforces.com/problemset/problem/1747/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int b = v[1];

    for (int i = 1; i < n; i++)
        b = min(v[i], b);

    if (v[0] <= b)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }
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