// link : https://codeforces.com/problemset/problem/1804/B
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
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<int> p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    int packs = 0;
    int ex = -1;
    int left = 0;

    for (int i = 0; i < n; i++)
    {
        if (p[i] > ex || left <= 0)
        {
            packs++;
            ex = p[i] + w + d;
            left = k;
        }
        left--;
    }

    cout << packs << endl;
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