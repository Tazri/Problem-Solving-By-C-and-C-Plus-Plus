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

void program(int caseno)
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    multiset<int> mt;

    cout << "Case " << caseno << ": ";

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        mt.insert(v[i]);
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int mx;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            mt.erase(mt.find(v[i]));
            int mn = *mt.begin();

            if (v[i] < mn)
            {
                cout << i << endl;
                return;
            }

            mx = v[i];
            continue;
        }

        if (i == n)
        {
            if (mx < v[i])
            {
                cout << i << endl;
                return;
            }
            continue;
        }

        int vi = v[i];
        mt.erase(mt.find(vi));
        int mn = *mt.begin();
        if (mx < vi && vi < mn)
        {
            cout << i << endl;
            return;
        }

        mx = max(vi, mx);
    }

    cout << "Humanity is doomed!" << endl;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}