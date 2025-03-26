// link : https://codeforces.com/problemset/problem/1732/B
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
    vector<char> arr(n + 1);

    cin >> arr[1];
    int curr = 1;

    for (int i = 2; i <= n; i++)
    {
        char ch;
        cin >> ch;

        if (ch == arr[curr])
        {
            continue;
        }
        arr[++curr] = ch;
    }

    if (curr == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (arr[2] == '0')
    {
        cout << curr - 1 << endl;
    }
    else
    {
        cout << curr - 2 << endl;
    }
}
// TODO
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}