// link : https://codeforces.com/problemset/problem/1005/A
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
    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int ci;
        cin >> ci;

        if (ci == 1)
            v.push_back(1);
        else
            v.back() += 1;
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " \n"[i == v.size() - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}