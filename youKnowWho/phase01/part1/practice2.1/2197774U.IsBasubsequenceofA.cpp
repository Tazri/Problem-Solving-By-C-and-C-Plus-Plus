// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int &ai : a)
        cin >> ai;
    for (int &bi : b)
        cin >> bi;

    int bi = 0;
    for (int i = 0; i < n; i++)
    {
        if (bi >= m)
            break;
        if (b[bi] == a[i])
            bi++;
    }

    if (bi >= m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}