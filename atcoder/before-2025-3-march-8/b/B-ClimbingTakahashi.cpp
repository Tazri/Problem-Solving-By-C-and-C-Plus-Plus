// link : https://atcoder.jp/contests/abc235/tasks/abc235_b?lang=en
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
    int prev;
    cin >> prev;
    int stand = prev;
    bool isFinish = false;

    for (int i = 1; i < n; i++)
    {
        int next;
        cin >> next;

        if (next > prev && isFinish == false)
        {
            stand = next;
        }

        if (next <= prev)
        {
            isFinish = true;
        }

        prev = next;
    }

    cout << stand << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}