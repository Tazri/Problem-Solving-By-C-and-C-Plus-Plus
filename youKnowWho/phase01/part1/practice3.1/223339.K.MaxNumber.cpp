// linK : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
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

int mxV(vector<int> v, int i = 0)
{
    if (i >= v.size())
    {
        return v.back();
    }

    return max(v[i], mxV(v, i + 1));
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << mxV(v) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}