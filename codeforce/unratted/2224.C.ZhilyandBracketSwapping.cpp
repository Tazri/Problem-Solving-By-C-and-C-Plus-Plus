// link : https://codeforces.com/contest/2224/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string a;
    string b;
    cin >> a;
    cin >> b;

    int stackA = 0;
    int stackB = 0;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '(' && b[i] == '(')
        {
            stackA++;
            stackB++;
            continue;
        }

        if (a[i] == ')' && b[i] == ')')
        {
            if (stackA && stackB)
            {
                stackA--;
                stackB--;
                continue;
            }
            if (stackA == 0 && stackB == 0)
            {
                cout << "NO" << endl;
                return;
            }

            if (k == 0)
            {
                cout << "NO" << endl;
                return;
            }

            if (stackA + stackB <= 2)
            {
                cout << "NO" << endl;
                return;
            }
            k--;

            if (stackA == 0)
            {
                stackA += 2;
                stackB -= 2;
            }
            else if (stackB == 0)
            {
                stackA -= 2;
                stackB += 2;
            }

            stackA--;
            stackB--;
            continue;
        }

        if (stackA == 0 && stackB == 0)
        {
            cout << "NO" << endl;
            return;
        }

        if (stackA && stackB)
        {
            k++;
            if (a[i] == ')')
                stackA--;
            else
                stackA++;

            if (b[i] == ')')
                stackB--;
            else
                stackB++;
            continue;
        }

        if (a[i] == ')' && stackA == 0)
        {
            swap(a[i], b[i]);
        }
        else if (b[i] == ')' && stackB == 0)
        {
            swap(a[i], b[i]);
        }

        if (a[i] == ')')
        {
            stackA--;
        }
        else
        {
            stackA++;
        }

        if (b[i] == ')')
        {
            stackB--;
        }
        else
        {
            stackB++;
        }
    }

    if (stackA || stackB)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}