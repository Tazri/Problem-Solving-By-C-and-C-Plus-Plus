#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    s[4] = ' ';
    s[7] = ' ';
    stringstream ss(s);

    int year,month,date;
    ss >> year >> month >> date;


    if(month > 4){
        cout <<"TBD" <<endl;
        return;
    }

    if(month == 4 && date > 30){
        cout <<"TBD" << endl;
        return;
    }

    cout <<"Heisei" << endl;

}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}