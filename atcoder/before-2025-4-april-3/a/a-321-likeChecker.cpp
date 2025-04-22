// link : https://atcoder.jp/contests/abc321/tasks/abc321_a?lang=en
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
    string num;
    cin >> num;

    for (int i = 1; i < num.size(); i++)
    {
        char prevChD = num[i - 1];
        char chD = num[i];

        int prevD = (int)prevChD - (int)'0';
        int d = (int)chD - (int)'0';

        if (prevD <= d)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}