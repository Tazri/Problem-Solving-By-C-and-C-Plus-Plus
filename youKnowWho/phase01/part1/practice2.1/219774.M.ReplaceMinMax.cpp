// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
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
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] == mn)
            v[i] = mx;
        else if (v[i] == mx)
            v[i] = mn;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}