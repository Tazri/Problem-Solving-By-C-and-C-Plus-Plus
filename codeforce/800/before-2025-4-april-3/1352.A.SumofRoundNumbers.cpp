// https://codeforces.com/problemset/problem/1352/A
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
    int num = n;
    int cnt = 0;

    while (num)
    {
        int d = num % 10;

        if (d)
            cnt++;
        num /= 10;
    }

    cout << cnt << endl;
    num = n;
    int i = 1;
    bool isFirst = true;
    while (num)
    {
        int d = num % 10;

        if (d)
        {
            if (isFirst)
            {
                cout << d * i;
                isFirst = false;
            }
            else
            {
                cout << " " << d * i;
            }
        }

        num /= 10;
        i *= 10;
    }

    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}