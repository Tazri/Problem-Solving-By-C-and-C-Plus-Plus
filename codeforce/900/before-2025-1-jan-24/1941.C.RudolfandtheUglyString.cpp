// link : https://codeforces.com/problemset/problem/1941/C
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
    string word;
    int n;
    cin >> n;
    cin >> word;

    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }

    int remove = 0;

    for (int i = 0; i < n - 2; i++)
    {
        char ch = word[i];

        if (ch == 'm' || ch == 'p')
        {
            // check two more character
            bool isMap = ch == 'm' && word[i + 1] == 'a' && word[i + 2] == 'p';
            bool isPie = ch == 'p' && word[i + 1] == 'i' && word[i + 2] == 'e';

            if (isMap || isPie)
            {
                remove++;
                i += 2;
            }
        }
    }

    cout << remove << endl;
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