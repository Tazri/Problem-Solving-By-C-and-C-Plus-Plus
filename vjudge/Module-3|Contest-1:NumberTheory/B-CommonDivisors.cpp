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

int sz = 1e6;
vector<vector<int>> nod(sz + 1, vector<int>());

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = -1;
    for (int &vi : v)
    {
        cin >> vi;
        mx = max(mx, vi);
    }

    vector<int> mp(mx + 1, 0);
    vector<int> freq(mx + 1, 0);
    for (int &vi : v)
        mp[vi]++;

    for (int i = mx; i > 1; i--)
    {
        for (int j = i; j <= mx; j += i)
        {
            if (mp[j] == 0)
                continue;

            freq[i] += mp[j];

            if (freq[i] > 1)
            {
                cout << i << endl;
                return;
            }
        }
    }

    cout << 1 << endl;
    return;
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