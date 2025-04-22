// link : https://atcoder.jp/contests/abc237/tasks/abc237_b?lang=en
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
    int h, w;

    cin >> h >> w;

    vector<vector<int>> mc(h, vector<int>(w, 0));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> mc[i][j];
        }
    }

    vector<vector<int>> mb(w, vector<int>(h, 0));

    for (int j = 0; j < w; j++)
    {
        for (int i = 0; i < h; i++)
        {
            mb[j][i] = mc[i][j];
        }
    }

    for (int i = 0; i < mb.size(); i++)
    {
        cout << mb[i][0];
        for (int j = 1; j < mb[i].size(); j++)
            cout << " " << mb[i][j];
        cout << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}