// link : https://codeforces.com/problemset/problem/1783/A
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

    sort(v.rbegin(), v.rend());

    bool isEqual = true;
    for (int i = 1; i < n; i++)
        if (v[i] != v[i - 1])
        {
            isEqual = false;
            break;
        }

    if (isEqual)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    swap(v[1], v[n - 1]);

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
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