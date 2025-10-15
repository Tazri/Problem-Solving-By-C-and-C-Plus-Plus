// link : https://codeforces.com/problemset/problem/155/A
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
    int mn, mx;

    cin >> mn;
    mx = mn;

    int cnt = 0;

    for (int i = 1; i < n; i++)
    {
        int score;
        cin >> score;

        if (score < mn)
        {
            cnt++;
            mn = score;
        }

        if (score > mx)
        {
            cnt++;
            mx = score;
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