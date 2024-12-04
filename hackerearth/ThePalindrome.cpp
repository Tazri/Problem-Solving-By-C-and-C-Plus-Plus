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

bool test()
{
    string s;
    cin >> s;

    int halflen = s.size() / 2;

    for (int i = 0, j = s.size() - 1; i < halflen; i++, j--)
    {
        if (s[i] != s[j])
        {
            cout << "No" << endl;
            return false;
        }
    }

    cout << "Yes" << endl;
    return true;
    ;
}

int main()
{
    optimize();

    int tc;
    cin >> tc;

    while (tc--)
        test();

    return 0;
}