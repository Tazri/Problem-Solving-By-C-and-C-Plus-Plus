// link : https://codeforces.com/problemset/problem/4/B
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

int i = 0;
int mnsum = 0;
int mxsum = 0;
struct Day
{
    int mn, mx, day;
    int study = 0;
    Day()
    {
        cin >> mn >> mx;
        study = mn;
        mnsum += mn;
        mxsum += mx;
        day = i++;
    }
};

void program()
{
    int n, total;
    cin >> n >> total;

    vector<Day> v(n);

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += v[i].mn;

    if (sum > total || mxsum < total)
    {
        cout << "NO" << endl;
        return;
    }

    sort(v.begin(), v.end(), [](Day a, Day b)
         { 
            int ad = a.mx - a.mn;
            int bd = b.mx - b.mn;
            return bd > ad; });

    total -= mnsum;

    for (int i = 0; i < n; i++)
    {
        int can = v[i].mx - v[i].mn;
        int add = min(can, total);
        total -= add;
        v[i].study += add;
    }

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
        ans[v[i].day] = v[i].study;

    if (total == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}