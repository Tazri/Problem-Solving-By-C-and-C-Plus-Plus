// link : https://atcoder.jp/contests/abc299/tasks/abc299_a?lang=en
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
    string s;
    cin >> s;
    int cnt = 0;
    for (char ch : s)
    {
        if (ch == '|')
            cnt++;
        else if (ch == '*')
        {
            if (cnt == 1)
                cout << "in" << endl;
            else
                cout << "out" << endl;
            break;
        }
    }
    return 0;
}