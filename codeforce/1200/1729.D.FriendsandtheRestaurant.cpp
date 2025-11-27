// link : https://codeforces.com/problemset/problem/1729/D
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

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        int yi;
        cin >> yi;
        v[i] = yi - v[i];
    }

    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());
    vector<int> neg;
    neg.reserve(n);

    while (v.size() && v.back() < 0)
    {
        if (v.back() < 0)
        {
            neg.push_back(v.back());
            v.pop_back();
        }
    }

    if (v.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    int ni = 0;
    int vi = 0;

    int extra = 0;

    while (ni < neg.size() || vi < v.size())
    {
        if (ni < neg.size() && vi < v.size())
        {
            if (v[vi] + neg[ni] < 0)
            {
                ni++;
            }
            else
            {
                ans++;
                ni++;
                vi++;
            }
        }
        else if (ni < neg.size())
            ni++;
        else
        {
            vi++;
            extra++;
        }
    }

    ans += (extra / 2);
    cout << ans << endl;
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