// link : https://atcoder.jp/contests/abc311/tasks/abc311_a?lang=en
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
    string word;
    int ans = 0;
    cin >> word;
    bool a = false, b = false, c = false;
    for (int i = 1; i <= n; i++)
    {
        if (word[i - 1] == 'A')
        {
            a = true;
        }
        else if (word[i - 1] == 'B')
        {
            b = true;
        }
        else if (word[i - 1] == 'C')
        {
            c = true;
        }

        if (a && b && c)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}