// link : https://atcoder.jp/contests/abc290/tasks/abc290_a?lang=en
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
    int n, m;
    cin >> n >> m;
    vector<int> points(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> points[i];

    int score = 0;

    for (int i = 0; i < m; i++)
    {
        int solve;
        cin >> solve;
        score += points[solve];
    }

    cout << score << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}