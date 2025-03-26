// link : https://atcoder.jp/contests/abc301/tasks/abc301_b?lang=en
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
    int prev;
    cin >> prev;

    cout << prev;

    for (int i = 1; i < n; i++)
    {
        int next;
        cin >> next;

        if (prev < next)
        {
            for (int j = prev + 1; j < next; j++)
            {
                cout << " " << j;
            }
            cout << " " << next;
        }
        else if (prev > next)
        {
            for (int j = prev - 1; j > next; j--)
            {
                cout << " " << j;
            }
            cout << " " << next;
        }
        prev = next;
    }

    cout << endl;
    return 0;
}