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

    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> peak;
    peak.reserve(n);
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] > v[i] && v[i] < v[i + 1])
            peak.push_back(i);
        else if (v[i - 1] < v[i] && v[i] > v[i + 1])
            peak.push_back(i);
    }

    if (peak.size() < 2)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < peak.size() - 1; i++)
    {
        vector<int> sub;
        sub.reserve(4);

        sub.push_back(v[peak[i] - 1]);
        sub.push_back(v[peak[i]]);
        sub.push_back(v[peak[i + 1]]);
        sub.push_back(v[peak[i + 1] + 1]);

        int mn = sub[0];
        int mx = sub[0];

        for (int i = 0; i < 4; i++)
        {
            mn = min(mn, sub[i]);
            mx = max(mx, sub[i]);
        }

        if (mn != sub[0] && mx != sub[0] && mn != sub.back() && mx != sub.back())
        {
            int l = peak[i] - 1 + 1;
            int r = peak[i + 1] + 1 + 1;

            cout << l << " " << r << endl;
            return;
        }
    }

        cout << -1 << endl;
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