// link : https://codeforces.com/problemset/problem/467/B
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

bool isFriend(int a, int b, int k)
{
    int cnt = 0;
    while (a || b)
    {
        int abit = a & 1;
        int bbit = b & 1;

        if (abit != bbit)
            cnt++;

        if (cnt > k)
            return false;
        a >>= 1;
        b >>= 1;
    }

    if (cnt > k)
        return false;
    return true;
}

void program()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> p(m);

    for (int i = 0; i < m; i++)
        cin >> p[i];
    int f;
    cin >> f;

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (isFriend(f, p[i], k))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}