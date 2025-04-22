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
    string s;
    cin >> s;

    int o = 0;
    int z = 0;

    for (char ch : s)
        if (ch == '1')
            o++;
        else
            z++;

    int ans = z > o ? z - o : o - z;
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}