// link : https://codeforces.com/problemset/problem/703/A
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
    int m = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int mi, ci;
        cin >> mi >> ci;

        if (mi > ci)
            m++;
        else if (ci > mi)
            c++;
    }

    if (m == c)
        cout << "Friendship is magic!^^" << endl;
    else if (m > c)
        cout << "Mishka" << endl;
    else
        cout << "Chris" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}