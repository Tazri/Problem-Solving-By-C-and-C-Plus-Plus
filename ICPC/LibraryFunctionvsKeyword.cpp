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
    string s;
    cin >> s;
    int size = s.size();

    int stop = -1;
    int cnt = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (stop == -1 && s[i] == '\\' && s[i + 1] == '0')
        {
            stop = i;
        }

        if (s[i] == '\\' && s[i + 1] == '0')
            cnt++;
    }

    if (stop == -1)
    {
        cout << size + 1 << " " << size << endl;
        return;
    }

    size = s.size() - (cnt * 2);
    size += cnt;
    size += 1;

    cout << size << " " << stop << endl;
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