// link : https://atcoder.jp/contests/abc325/tasks/abc325_b?lang=en
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
    vector<int> hours(24, 0);

    for (int i = 0; i < n; i++)
    {
        int w, t;
        cin >> w >> t;

        int st = 9 - t;
        int et = 18 - t;

        if (st < 0)
            st += 24;
        if (et < 0)
            et += 24;

        if (st < et)
            for (int hi = st; hi < et; hi++)
                hours[hi] += w;
        else
        {
            for (int hi = st; hi < 24; hi++)
                hours[hi] += w;
            for (int hi = 0; hi < et; hi++)
                hours[hi] += w;
        }
    }

    int mx = hours[0];
    for (int w : hours)
        mx = max(mx, w);

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}