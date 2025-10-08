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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (n == k)
    {
        string anseq(n, '-');
        cout << anseq << endl;
        return;
    }

    int li = 0;
    int ri = n - 1;
    int qli = 0;
    int qri = n - 1;
    vector<char> ans(n, '+');

    for (char ch : s)
    {
        if (ch == '0')
        {
            ans[li] = '-';

            if (li != qli)
            {
                ans[qli] = '?';
            }
            qli++;
            li++;
            continue;
        }

        if (ch == '1')
        {
            ans[ri] = '-';

            if (ri != qri)
            {
                ans[qri] = '?';
            }
            qri--;
            ri--;
            continue;
        }

        ans[qli] = '?';
        ans[qri] = '?';
        qli++;
        qri--;
    }

    for (char ch : ans)
        cout << ch;
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