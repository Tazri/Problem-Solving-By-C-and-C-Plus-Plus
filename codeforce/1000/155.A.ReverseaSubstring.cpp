// link : https://codeforces.com/problemset/problem/1155/A
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

    string sorted;
    sorted = s;
    sort(sorted.begin(), sorted.end());

    if (s == sorted)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] > s[i])
        {
            int ai = i - 1 + 1;
            int aj = i + 1;

            cout << ai << " " << aj << endl;
            return;
        }
    }
}

int main()
{
    optimize();

    program();
    return 0;
}