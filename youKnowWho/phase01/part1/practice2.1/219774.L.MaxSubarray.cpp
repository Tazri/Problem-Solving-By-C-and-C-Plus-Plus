// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
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

    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            int mx = v[l];
            for (int i = l; i <= r; i++)
                mx = max(v[i], mx);
            cout << mx << " ";
        }
    }
    cout << endl;
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