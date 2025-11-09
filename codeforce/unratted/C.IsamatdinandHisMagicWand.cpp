// link : https://codeforces.com/contest/2167/problem/C
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

    bool diff = false;

    for (int i = 1; i < n; i++)
        if (v[i] % 2 != v[i - 1] % 2)
        {
            diff = true;
            break;
        }

    if (!diff)
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " \n"[i == n - 1];
        return;
    }

    bool isSorted = true;
    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            isSorted = false;
            break;
        }

    if (isSorted)
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " \n"[i == n - 1];
        return;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
    return;
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