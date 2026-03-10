#include <bits/stdc++.h>

using namespace std;

int query(string s)
{
    cout << "? " << s << endl;
    cout.flush();
    int ans;
    cin >> ans;
    return ans;
}

void program()
{
    int n;
    cin >> n;
    string baseString(n, 'a');
    int base = query(baseString);
    string ans;
    for (int i = 0; i < n; i++)
    {
        baseString[i] = 'z';
        int u = query(baseString);
        int du = base - u;
        du += 25;
        du /= 2;
        char ch = (char)((int)'a' + du);
        ans.push_back(ch);
        baseString[i] = 'a';
    }

    cout << "! " << ans << endl;
    cout.flush();
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}