// link : https://atcoder.jp/contests/abc318/tasks/abc318_b?lang=en
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
    int size = 100;
    vector<vector<bool>> graph(size, vector<bool>(size, false));

    while (n--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; j < y2; j++)
            {
                graph[i][j] = true;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (graph[i][j])
                cnt++;
    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}