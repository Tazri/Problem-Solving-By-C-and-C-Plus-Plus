// link : https://codeforces.com/problemset/problem/327/A

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

    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int l = i;
            int r = j;

            for (int k = l; k <= r; k++)
                v[k] = v[k] == 0 ? 1 : 0;

            int cnt = 0;

            for (int &vi : v)
                if (vi)
                    cnt++;

            mx = max(mx, cnt);

            for (int k = l; k <= r; k++)
                v[k] = v[k] == 0 ? 1 : 0;
        }
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}