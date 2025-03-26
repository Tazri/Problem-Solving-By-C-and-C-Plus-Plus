// link : https://codeforces.com/contest/2060/problem/E
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

void test()
{
    int n, m1, m2;

    cin >> n >> m1 >> m2;

    vector<vector<bool>> graph(n + 1);

    for (int i = 0; i <= n; i++)
    {
        graph[i] = vector<bool>(n + 1, false);
    }

    for (int i = 0; i < m1; i++)
    {
        int frm, to;
        cin >> frm >> to;
        graph[frm][to] = true;
        graph[to][frm] = true;
    }

    int match = 0;
    for (int i = 0; i < m2; i++)
    {
        int frm, to;
        cin >> frm >> to;

        if (graph[frm][to])
        {
            match++;
        }
    }

    int add = m2 - match;
    int remove = m1 - match;

    cout << remove + add << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while (t--)
    test();
    return 0;
}
// TODO
/**
 ans : 21
20 19 6
5 7
9 2
6 8
4 1
6 3
14 3
8 10
4 11
1 5
3 1
11 17
15 11
7 18
2 13
2 1
12 7
19 7
20 7
16 4
19 6
15 7
6 10
1 20
3 10
12 15
*/