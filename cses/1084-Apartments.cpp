// link : https://cses.fi/problemset/task/1084
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> app(n);
    vector<int> aper(m);

    for (int i = 0; i < n; i++)
        cin >> app[i];

    for (int i = 0; i < m; i++)
        cin >> aper[i];

    sort(app.begin(), app.end());
    sort(aper.begin(), aper.end());

    int aperi = 0, appi = 0;
    int cnt = 0;
    while (aperi < m && appi < n)
    {
        if (aper[aperi] + k >= app[appi] && aper[aperi] - k <= app[appi])
        {
            cnt++;
            aperi++;
            appi++;
        }
        else if (aper[aperi] < app[appi] - k)
        {
            aperi++;
        }
        else
        {
            appi++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}