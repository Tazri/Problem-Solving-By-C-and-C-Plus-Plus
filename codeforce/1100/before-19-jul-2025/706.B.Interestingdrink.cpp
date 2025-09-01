// link : https://codeforces.com/problemset/problem/706/B
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
    unordered_map<int, int> mp;
    vector<int> price(n);

    for (int i = 0; i < n; i++)
        cin >> price[i];

    sort(price.begin(), price.end(), [](int a, int b)
         { return a < b; });

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int s;
        cin >> s;

        if (mp.count(s))
        {
            cout << mp[s] << endl;
            continue;
        }

        int l = 0;
        int r = n - 1;
        int pi = -1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (price[mid] == s)
            {
                pi = mid;
                l = mid + 1;
            }
            else if (s < price[mid])
            {
                r = mid - 1;
            }
            else if (s > price[mid])
            {
                l = mid + 1;
            }
        }

        if (pi >= 0)
        {
            mp[s] = pi + 1;
            cout << pi + 1 << endl;
            continue;
        }
        mp[s] = r + 1;
        cout << r + 1 << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}