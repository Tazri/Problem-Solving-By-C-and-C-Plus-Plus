// link : https://codeforces.com/problemset/problem/1791/G1
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
    int n, c;
    cin >> n >> c;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    for (int i = 0; i < n; i++)
        v[i] += i + 1;

    sort(v.begin(), v.end());

    int cnt = 0;
    for (int vi : v)
    {
        if (vi <= c)
        {
            cnt++;
            c -= vi;
            continue;
        }
        break;
    }

    cout << cnt << endl;
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