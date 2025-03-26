// link : https://atcoder.jp/contests/abc308/tasks/abc308_a?lang=en
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
    int prev;
    cin >> prev;

    bool isOk = true;

    if (prev < 100 || prev > 675 || prev % 25 != 0)
    {
        isOk = false;
    }

    for (int i = 1; i < 8; i++)
    {
        int now;
        cin >> now;

        if (prev > now)
        {
            isOk = false;
        }

        if (now % 25 != 0)
        {
            isOk = false;
        }

        if (now < 100 || now > 675)
        {
            isOk = false;
        }

        prev = now;
    }

    if (isOk)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}