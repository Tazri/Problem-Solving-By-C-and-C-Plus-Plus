// link : https://codeforces.com/contest/2182/problem/B
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

vector<int> v;

void build()
{
    int n = 1;

    for (int i = n; i <= 1e9; i *= 2)
    {
        v.push_back(i);
    }
}

int can(int a, int b)
{
    int cnt = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (i & 1)
        {
            if (v[i] > b)
                break;
            b -= v[i];
            cnt++;
            continue;
        }

        if (v[i] > a)
            break;
        a -= v[i];
        cnt++;
        continue;
    }

    return cnt;
}

void program()
{
    int a, b;
    cin >> a >> b;

    cout << max(can(a, b), can(b, a)) << endl;
}

int32_t main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}