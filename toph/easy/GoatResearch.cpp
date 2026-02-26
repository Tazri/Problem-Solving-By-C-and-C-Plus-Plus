// link : https://toph.co/p/goat-research
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
    vector<string> v;
    v.reserve(n);
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        string vi;
        cin >> vi;

        if (vi.size() - 2 == 0)
        {
            vi.push_back('a');
            mx = max(mx, (int)vi.size());
            v.push_back(vi);
            continue;
        }

        if ((vi.size() - 1) % 2 != 0)
        {
            vi.pop_back();
            mx = max(mx, (int)vi.size());
            v.push_back(vi);
            continue;
        }
        mx = max(mx, (int)vi.size());
        v.push_back(vi);
    }

    // cout << mx << endl;

    for (int i = 0; i < n; i++)
    {
        int sp = mx - v[i].size();
        sp /= 2;
        string vi = string(sp, ' ') + v[i];
        v[i] = vi;
    }
    for (string vi : v)
        cout << vi << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}