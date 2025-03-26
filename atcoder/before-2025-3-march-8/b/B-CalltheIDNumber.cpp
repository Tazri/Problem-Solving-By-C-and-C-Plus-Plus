// link : https://atcoder.jp/contests/abc293/tasks/abc293_b?lang=en
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
    vector<bool> arr(n + 1, false);
    int notCalled = n;

    for (int i = 1; i <= n; i++)
    {
        int id;
        cin >> id;
        if (arr[i] == false)
        {
            if (arr[id] == false)
            {
                notCalled--;
            }
            arr[id] = true;
        }
    }

    cout << notCalled << endl;
    bool isFirst = true;
    for (int i = 1; i <= n; i++)
    {

        if (arr[i] == false)
        {
            if (isFirst)
            {
                cout << i;
                isFirst = false;
            }
            else
            {
                cout << " " << i;
            }
        }
    }
    cout << endl;
    return 0;
}