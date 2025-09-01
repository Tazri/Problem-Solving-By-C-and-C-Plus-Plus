// link : https://codeforces.com/contest/1997/problem/B
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
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {

        if (s1[i - 1] == '.' && s1[i + 1] == '.' && s2[i] == '.' && s2[i - 1] == 'x' && s2[i + 1] == 'x')
        {
            cnt++;
        }

        if (s2[i - 1] == '.' && s2[i + 1] == '.' && s2[i] == '.' && s1[i] == '.' && s1[i - 1] == 'x' && s1[i + 1] == 'x')
            cnt++;
    }

    cout << cnt << endl;
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

/*
8
.......x
.x.xx...
1

9
..x.x.x.x
x.......x


..x..x...
...x.x....
*/