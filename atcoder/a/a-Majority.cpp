// link : https://atcoder.jp/contests/abc287/tasks/abc287_a?lang=en
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
    int f = 0;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "For")
            f++;
        else
            a++;
    }

    if (f > a)
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