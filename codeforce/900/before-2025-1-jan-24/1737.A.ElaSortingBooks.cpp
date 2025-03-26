// link  : https://codeforces.com/problemset/problem/1737/A
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
    int n, k;
    cin >> n >> k;
    int per = n / k;
    int size = (int)'z' - (int)'a' + 1;
    vector<int> arr(size, 0);

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        int chi = (int)ch - (int)'a';
        arr[chi]++;
    }

    vector<char> ans(k);

    for (int i = 0; i < k; i++)
    {
        int mex = 0;
        for (int j = 0; j < per; j++)
        {
            if (arr[j] <= 0)
            {
                mex = j;
                break;
            }
            else
            {
                arr[j]--;
                mex++;
            }
        }

        ans[i] = (char)((int)'a' + mex);
    }

    for (int i = 0; i < k; i++)
    {
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}