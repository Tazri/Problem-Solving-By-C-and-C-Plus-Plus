// link : https://codeforces.com/problemset/problem/520/A
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
    cin >> word;

    vector<bool> arr(26, false);

    for (char ch : word)
    {
        char lch = tolower(ch);
        int chi = (int)lch - (int)'a';
        arr[chi] = true;
    }

    bool isPanagram = true;

    for (bool b : arr)
    {
        if (!b)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}