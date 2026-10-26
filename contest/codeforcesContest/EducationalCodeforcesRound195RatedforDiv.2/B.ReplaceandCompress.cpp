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
    int n;
    vector<int> v;
    vector<int> vc;
    string s;
    cin >> s;
    n = s.size();
    int len = 1;


    for(int i = 1;i < n;i++){
        if(s[i] == s[i-1]){
            len++;
        }else{
            v.push_back(len);
            if(s[i-1] == '1')
                vc.push_back(1);
            else 
                vc.push_back(0);
            len = 1;
        }
    }


    v.push_back(len);

    if(s.back() == '1')
        vc.push_back(1);
    else 
        vc.push_back(0);


    n = v.size();

    if(n == 1){
        cout <<2 << endl;
        return;
    }

    int one = 0;
    int zero = 0;
    int three = 0;
    for(int i= 0;i < n;i++){
        if(i == 0 || i == n-1){
            if(v[i] > 2){
                three = 1;
            }
            continue;
        }

        if(v[i] > 2){
            three = 1;
        }
        else if(v[i] == 1)
        {one=1;
        }
    }


    cout << one+three+1 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}