// link : https://atcoder.jp/contests/abc197/tasks/abc197_b?lang=en
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
    int h, w, x, y;

    cin >> h >> w >> x >> y;
    x--;
    y--;
    vector<vector<char>> arr(h, vector<char>(w, 0));

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> arr[i][j];

    int cnt = 0;
    // check up
    for (int i = x; i >= 0; i--)
    {
        if (arr[i][y] == '#')
            break;
        cnt++;
    }

    for (int i = x + 1; i < h; i++)
    {
        if (arr[i][y] == '#')
            break;
        cnt++;
    }

    for (int j = y - 1; j >= 0; j--)
    {
        if (arr[x][j] == '#')
            break;
        cnt++;
    }

    for (int j = y + 1; j < w; j++)
    {
        if (arr[x][j] == '#')
            break;
        cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}