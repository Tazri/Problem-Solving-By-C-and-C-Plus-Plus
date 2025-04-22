// link : https://codeforces.com/problemset/problem/1360/C
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
    vector<int> arr(n);
    vector<int> mp(100 + 1, 0);
    int o = 0;
    int e = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] & 1)
            o++;
        else
            e++;
    }

    if (e % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    int d = e > o ? e - o : o - e;

    // try to remove one

    for (int i = 0; i < n; i++)
    {
        int ai = arr[i];

        if (mp[ai + 1] || mp[ai - 1])
        {
            o--;
            e--;

            if (mp[ai + 1])
                mp[ai + 1]--;
            else
                mp[ai - 1]--;
        }
        else
            mp[ai]++;

        if (e % 2 == 0 || o % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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