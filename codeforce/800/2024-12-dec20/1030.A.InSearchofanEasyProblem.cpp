// link : https://codeforces.com/problemset/problem/1030/A
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
    bool isHard = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ans;
        cin >> ans;
        if (ans)
            isHard = true;
    }

    cout << (isHard ? "HARD" : "EASY") << endl;
    return 0;
}