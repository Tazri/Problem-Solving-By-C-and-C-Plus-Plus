// link : https://codeforces.com/contest/1722/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<string> v1(n);
    vector<string> v2(n);
    vector<string> v3(n);

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp[v1[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
        mp[v2[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v3[i];
        mp[v3[i]]++;
    }

    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int t1 = mp[v1[i]];
        int t2 = mp[v2[i]];
        int t3 = mp[v3[i]];
        if (t1 == 1)
            a += 3;
        else if (t1 == 2)
            a++;

        if (t2 == 1)
            b += 3;
        else if (t2 == 2)
            b++;

        if (t3 == 1)
            c += 3;
        else if (t3 == 2)
            c++;
    }

    cout << a << " " << b << " " << c << endl;
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