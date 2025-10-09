// link : https://codeforces.com/problemset/problem/2137/D
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
    vector<int> b(n);
    vector<int> a(n);
    for (int &bi : b)
        cin >> bi;

    vector<int> mp(n + 1);
    vector<int> count(n + 1);
    vector<int> freq(n + 1);

    int id = 1;

    for (int i = 0; i < n; i++)
    {
        int bi = b[i];

        int biId = mp[bi];

        if (biId == 0)
        {
            mp[bi] = id++;
            count[mp[bi]] = 1;
            a[i] = mp[bi];
            continue;
        }

        if (count[biId] < bi)
        {
            count[biId]++;
            a[i] = biId;
            continue;
        }

        mp[bi] = id++;
        count[mp[bi]] = 1;
        a[i] = mp[bi];
    }

    for (int &ai : a)
        freq[ai]++;

    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] != b[i])
        {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[n - 1 == i];
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