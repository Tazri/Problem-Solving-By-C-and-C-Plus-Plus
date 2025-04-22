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
    vector<bool> mp(101, false);
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (!mp[ai])
        {
            mp[ai] = true;
            arr.push_back(ai);
        }
    }

    sort(arr.begin(), arr.end());

    cout << arr[arr.size() - 2] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}