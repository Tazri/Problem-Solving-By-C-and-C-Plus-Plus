// link : https://codeforces.com/contest/44/problem/A
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

int main()
{
    optimize();

    int n;
    vector<pair<string, string>> li;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        pair<string, string> flower;

        cin >> flower.first >> flower.second;

        bool isFound = false;

        for (pair<string, string> fl : li)
        {
            if (fl == flower)
            {
                isFound = true;
                break;
            }
        }

        if (!isFound)
        {
            li.push_back(flower);
        }
    }

    cout << li.size() << endl;
    return 0;
}