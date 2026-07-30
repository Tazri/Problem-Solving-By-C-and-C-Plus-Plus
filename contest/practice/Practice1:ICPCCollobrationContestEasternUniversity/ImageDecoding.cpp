// link : https://open.kattis.com/problems/imagedecoding
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int n, int _DIBBA_NO)
{

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        string s;

        getline(cin, s);

        stringstream ss(s);
        char ch;
        ss >> ch;

        int times;
        int sum = 0;
        while (ss >> times)
        {
            string line(times, ch);
            cout << line;
            sum += times;
            ch = ch == '.' ? '#' : '.';
        }

        cout << endl;
        st.insert(sum);
    }

    if (st.size() > 1)
    {
        cout << "Error decoding image" << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    int n;
    bool isFirst = true;
    while (true)
    {
        int n;
        cin >> n;
        cin.ignore();
        if (n == 0)
            break;

        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            cout << endl;
        }
        _DIBBA(n, t);
        t++;
    }
    return 0;
}