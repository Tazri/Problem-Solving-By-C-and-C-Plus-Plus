// link : https://codeforces.com/problemset/problem/2132/A
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
    string s;
    cin >> s;
    int k;
    cin >> k;
    string b;
    cin >> b;
    string turns;
    cin >> turns;

    string last;
    string first;

    for (int i = 0; i < k; i++)
        if (turns[i] == 'D')
            last.push_back(b[i]);

    for (int i = k - 1; i >= 0; i--)
        if (turns[i] == 'V')
            first.push_back(b[i]);

    cout << (first + s + last) << endl;
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