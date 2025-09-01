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
    for (int &vi : v)
        cin >> vi;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int need = x - v[i];

        if (mp.count(need))
        {
            cout << i + 1 << " " << mp[need] + 1 << endl;
            return;
        }
        mp[v[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}