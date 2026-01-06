// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
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

    for (int l = 0, r = n - 1; l <= r; l++, r--)
        if (v[l] != v[r])
        {
            cout << "NO" << endl;
            return;
        }
    cout << "YES" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}