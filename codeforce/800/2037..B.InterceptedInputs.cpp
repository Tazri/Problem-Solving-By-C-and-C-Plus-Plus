// link : https://codeforces.com/problemset/problem/2037/B
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
    int len;

    cin >> len;
    set<int> inputs;

    for (int i = 0; i < len; i++)
    {
        int input;
        cin >> input;
        inputs.insert(input);
    }

    int totalElements = len - 2;

    int n, m;

    for (int i : inputs)
    {
        if (totalElements % i != 0)
        {
            continue;
        }
        else
        {
            n = i;
            m = totalElements / n;

            if (inputs.count(m))
            {
                break;
            }
        }
    }

    cout << n << " " << m << endl;
}

int main()
{
    optimize();
    int t;

    cin >> t;

    while (t--)
    {
        test();
    }
    return 0;
}