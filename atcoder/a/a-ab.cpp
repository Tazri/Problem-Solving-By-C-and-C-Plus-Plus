// link : https://atcoder.jp/contests/abc327/tasks/abc327_a?lang=en
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
    cin >> n;
    char prev;
    char ch;
    cin >> prev;
    bool isAB = false;
    for (int i = 1; i < n; i++)
    {
        cin >> ch;

        if (ch == 'a' && prev == 'b')
            isAB = true;
        if (ch == 'b' && prev == 'a')
            isAB = true;
        prev = ch;
    }

    if (isAB)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}