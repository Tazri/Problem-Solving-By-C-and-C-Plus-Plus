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
    map<int, int> mp;
    vector<int> unique;
    unique.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;

        if (mp[arr[i]] == 1)
            unique.push_back(arr[i]);
    }

    int remove = 0;

    for (int ui : unique)
    {

        if (mp[ui] < ui)
            remove += mp[ui];
        else if (mp[ui] > ui)
            remove += mp[ui] - ui;
    }

    cout << remove << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}