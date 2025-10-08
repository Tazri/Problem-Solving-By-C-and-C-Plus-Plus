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
    vector<int> v;
    v.reserve(n);
    int prev;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (i == 0)
        {
            prev = ai;
            v.push_back(1);
            continue;
        }

        if (ai == prev)
        {
            v.back() += 1;
        }
        else
        {
            v.push_back(1);
            prev = ai;
        }
    }

    sort(v.begin(), v.end(), [](int a, int b)
         { return a > b; });

    int mx = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        int t = i + 1;
        int cnt = t * v[i];
        mx = max(mx, cnt);
    }

    cout << mx << endl;
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