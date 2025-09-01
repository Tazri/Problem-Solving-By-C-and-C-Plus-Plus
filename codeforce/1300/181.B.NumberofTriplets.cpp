// link : https://codeforces.com/problemset/problem/181/B
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

struct Point
{
    int x, y;
};

void program()
{
    int n;
    cin >> n;

    vector<Point> points(n);
    vector<vector<bool>> mp(2001, vector<bool>(2001, false));

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;

        points[i].x += 1000;
        points[i].y += 1000;

        mp[points[i].x][points[i].y] = true;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int midx = (points[i].x + points[j].x);
            int midy = (points[i].y + points[j].y);

            if (midx & 1)
                continue;
            if (midy & 1)
                continue;

            midx /= 2;
            midy /= 2;
            if (mp[midx][midy])
                cnt++;
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