// link : https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-matrix-column-sum
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
    vector<int> cols(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int ci = 0; ci < m; ci++)
        {
            int tmp;
            cin >> tmp;
            cols[ci] += tmp;
        }
    }

    cout << cols[0];
    for (int i = 1; i < m; i++)
    {
        cout << " " << cols[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}