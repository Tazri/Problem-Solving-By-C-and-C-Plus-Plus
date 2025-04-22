// link : https://atcoder.jp/contests/abc301/tasks/abc301_a?lang=en
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

int main()
{
    optimize();
    int n;
    string s;
    cin >> n;
    cin >> s;

    int t = 0;
    int a = 0;

    for (char ch : s)
    {
        if (ch == 'A')
            a++;
        else
            t++;
    }

    if (a > t)
        cout << "A" << endl;
    else if (t > a)
        cout << "T" << endl;
    else
    {
        int wins = t;
        t = 0;
        a = 0;

        for (char ch : s)
        {
            if (ch == 'A')
                a++;
            else
                t++;

            if (a == wins)
            {
                cout << "A" << endl;
                break;
            }

            if (t == wins)
            {
                cout << "T" << endl;
                break;
            }
        }
    }
    return 0;
}