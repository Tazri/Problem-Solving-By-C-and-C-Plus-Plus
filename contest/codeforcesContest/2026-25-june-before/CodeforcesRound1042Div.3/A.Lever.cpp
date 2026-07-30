// link : https://codeforces.com/contest/2131/problem/A
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
    vector<int> a(n);
    vector<int> b(n);

    for (int &ai : a)
        cin >> ai;

    for (int &bi : b)
        cin >> bi;

    int op = 0;

    while (true)
    {
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                index = i;
                a[index]--;
                break;
            }
        }

        op++;
        if (index == -1)
            break;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                a[i]++;
                break;
            }
        }
    }

    cout << op << endl;
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
