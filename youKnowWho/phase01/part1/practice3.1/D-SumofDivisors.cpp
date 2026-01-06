// link : https://atcoder.jp/contests/abc172/tasks/abc172_d
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

#define int ll

void build_nod(int n, vector<int> &nod)
{
    nod.assign(n + 1, 1);

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            nod[j]++;
        }
    }
}

void program()
{
    vector<int> nod;
    int n;
    cin >> n;
    build_nod(n, nod);

    int sum = 0;

    for (int i = 1; i <= n; i++)
        sum += (nod[i] * i);
    cout << sum << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}