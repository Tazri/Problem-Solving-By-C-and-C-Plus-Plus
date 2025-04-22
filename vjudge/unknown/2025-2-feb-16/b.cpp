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
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++)
        mp[arr[i]]++;

    vector<bool> bitArr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (mp[arr[i]] > 1)
        {
            bitArr[i] = false;
        }
        else
        {
            bitArr[i] = true;
        }
    }

    int ar = 0;
    int al = 0;
    int len = 0;
    int mxLen = 0;
    int l = 0;
    for (int i = 1; i <= n; i++)
    {
        if (bitArr[i] == false && bitArr[i - 1] == false)
        {
            continue;
        }

        if (bitArr[i] && bitArr[i - 1] == false)
        {
            l = i;
            len = 1;
            continue;
        }

        if (bitArr[i] && bitArr[i - 1])
        {
            len++;
            continue;
        }

        if (bitArr[i - 1] && bitArr[i] == false)
        {
            if (len > mxLen)
            {
                al = l;
                ar = i - 1;
                mxLen = len;
            }

            l = -1;
            len = 0;
        }
    }
    if (len > mxLen)
    {
        al = l;
        ar = n;
        mxLen = len;
    }

    if (mxLen > 0)
    {
        cout << al << " " << ar << endl;
    }
    else
    {
        cout << 0 << endl;
    }
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