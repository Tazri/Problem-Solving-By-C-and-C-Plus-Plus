// link : https://atcoder.jp/contests/abc307/tasks/abc307_a?lang=en
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

    // first week
    int cnt = 0;
    for (int i = 0; i < 7; i++)
    {
        int step;
        cin >> step;
        cnt += step;
    }

    cout << cnt;

    n--;
    while (n > 0)
    {
        cnt = 0;
        for (int i = 0; i < 7; i++)
        {
            int step;
            cin >> step;
            cnt += step;
        }
        cout << " " << cnt;
        n--;
    }

    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}