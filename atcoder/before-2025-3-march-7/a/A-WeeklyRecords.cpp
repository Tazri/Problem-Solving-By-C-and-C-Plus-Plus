// link : https://atcoder.jp/contests/abc307/tasks/abc307_a
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
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            int s;
            cin >> s;
            arr[i] += s;
        }
    }

    cout << arr[0];

    for (int i = 1; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}