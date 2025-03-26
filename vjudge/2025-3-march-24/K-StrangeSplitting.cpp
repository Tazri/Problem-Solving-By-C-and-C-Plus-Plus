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
    vector<int> arr(n);

    bool isSame = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (!i)
            continue;

        if (arr[i] != arr[i - 1])
            isSame = false;
    }

    if (isSame)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    int c = arr[0];
    int di = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            break;
        c = arr[i];
        di = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == di)
            cout << "B";
        else
            cout << "R";
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