// link : https://cses.fi/problemset/task/1629
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

struct Movie
{
    int r, l;
    Movie()
    {
        cin >> l >> r;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<Movie> v(n);

    sort(v.begin(), v.end(), [](Movie a, Movie b)
         { return a.r < b.r; });

    int ans = 1;
    int r = v[0].r;
    for (int i = 1; i < n; i++)
    {
        if (v[i].l >= r)
        {
            ans++;
            r = v[i].r;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}