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

bool check(vector<int> v)
{
    vector<int> cpy = v;
    int n = v.size();

    for (int i = 1; i < n; i++)
        v[i] += v[i - 1];

    for (int vi : v)
    {
        if (vi < 0)
            return false;
    }

    for (int &vi : cpy)
        cout << vi << " ";
    cout << endl;

    return true;
}

int program()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(v))
            cnt++;
        int front = v.front();
        v.erase(v.begin());
        v.push_back(front);
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}