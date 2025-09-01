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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }

    for (int i = 0; i < n - 2; i++)
    {
        int target = x - v[i];

        for (int j = i + 1; j < n; j++)
        {
            int need = target - v[j];

            if (mp.count(need) == 0)
            {
                continue;
            }
            if (mp[need] != i && mp[need] != j)
            {
                cout << i + 1 << " " << j + 1 << " " << mp[need] + 1 << endl;
                return;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}