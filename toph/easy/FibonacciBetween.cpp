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

int f = -1;
int s = -1;

int take()
{
    if (f == -1)
    {
        f = 0;
        return f;
    }

    if (s == -1)
    {
        s = 1;
        return s;
    }

    int d = f + s;
    f = s;
    s = d;
    return d;
}

void program()
{
    set<int> st;

    int l, r;
    cin >> l >> r;

    int d = take();

    while (d <= r)
    {
        if (l <= d && d <= r)
            st.insert(d);
        d = take();
    }

    for (int si : st)
        cout << si << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}