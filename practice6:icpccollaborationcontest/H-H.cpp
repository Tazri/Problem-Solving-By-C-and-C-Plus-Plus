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
    cin >> n;
    string s;
    cin >> s;
    vector<int> ans(n,0);
    int index = -1;

    for(int i = 0;i < n;i++){
        int nxt = (i+1) %n;
        if(s[i] == '0' && s[nxt] == '1'){
            index = nxt;
            break;
        }
    }

    if(index == -1){
        cout << -1 << endl;
        return;
    }

    int num = n-1;
    ans[index] = num;
    num--;
    for(int i = (index+1)%n;i != index;i=(i+1)%n){
        if(s[i] == '1')ans[i] = num--;
    }


    

    index = -1;

    for(int i = 0;i < n;i++){
        int nxt = (i+1)%n;

        if(s[i] == '1' && s[nxt] == '0'){
            index = nxt;
            break;
        }
    }

    num = 0;
    ans[index] = num;
    num++;
    for(int i = (index+1)%n;i != index;i = (i+1)%n){
        if(s[i] == '0'){
            ans[i] = num++;
        }
    }


    for(int i = 0;i < n;i++){
        cout << ans[i] << " \n"[i == n-1];
    }

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