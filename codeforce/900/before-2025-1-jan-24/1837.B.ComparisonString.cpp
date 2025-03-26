// link : https://codeforces.com/problemset/problem/1837/B
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
    int mxLen = 1;
    int len = 1;

    for (int i = 1; i < n; i++)
    {
        if (word[i - 1] == word[i])
        {
            len++;
        }
        else
        {
            mxLen = max(len, mxLen);
            len = 1;
        }
    }
    mxLen = max(len, mxLen);
    cout << mxLen + 1 << endl;
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
/*
7
>><>><>
-> expect 3
*/