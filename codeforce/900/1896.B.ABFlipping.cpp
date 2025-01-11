// link : https://codeforces.com/problemset/problem/1896/B
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

void test()
{
    int n;
    cin >> n;
    string word;
    cin >> word;
    int a = 0;
    int b = 0;
    int ans = n;

    for (int i = 0; i < n; i++)
    {
        if (word[i] == 'A')
            a++;
        else
            b++;

        if (a && b)
            break;
    }

    if (a == 0 || b == 0)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (word[i] == 'B')
            ans--;
        else
            break;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (word[i] == 'A')
            ans--;
        else
            break;
    }

    if (ans == 0)
    {
        cout << ans << endl;
        return;
    }
    cout << ans - 1 << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}