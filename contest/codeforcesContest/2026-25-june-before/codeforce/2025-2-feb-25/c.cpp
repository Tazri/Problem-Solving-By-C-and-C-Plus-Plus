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
    int n, x;
    cin >> n >> x;

    if (n <= 1)
    {
        cout << x << endl;
        return;
    }

    vector<int> arr(n, 0);
    unordered_set<int> marked;
    marked.insert(0);

    int size = 0;
    int num = x;
    int mx = 0;

    while (num)
    {
        if (num & 1)
        {
            if (mx == 0)
            {
                mx = 1;
            }
            else
            {
                mx <<= 1;
                mx |= 1;
            }
            size++;
        }
        else
            break;
        num >>= 1;
    }

    num = x;
    int len = 0;
    while (num)
    {

        len++;
        num >>= 1;
    }

    int mn = 1;

    for (int i = 1; i < len; i++)
        mn *= 2;

    if (mn <= (n - 1) && mn <= mx)
    {
        int s = mx ? 1 : 0;
        for (int i = 1; i < n; i++)
        {
            arr[i] = s;

            if (s < mx)
                s++;
        }
    }
    else
    {
        int s = mx ? 1 : 0;
        arr[1] = x;
        for (int i = 2; i < n; i++)
        {
            arr[i] = s;
            if (s < mx)
                s++;
        }
    }

    // printing...
    cout << arr[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
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