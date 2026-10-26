// link : https://codeforces.com/problemset/problem/1660/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> f(vector<int> &v){
    int n;
    n = v.size()-1;
    
    bool found = false;

    vector<int> preX(n+1);
    vector<int> preCnt(n+1);
    int pi = -1;

    for(int i = 1;i<= n;i++){
        if(v[i] < 0){
            preX[i] =1;

            if(pi == -1){
                pi = i;
            }
        }



        if(v[i] == -2 || v[i] == 2)
            preCnt[i] = 1;

        preX[i] += preX[i-1];
        preCnt[i] += preCnt[i-1];
    }

    if(pi == -1){
        return{0,0,preCnt.back()};
    }

    int mx = 0;
    int l = -1;
    int r= -1;
    for(int i = 1;i <= n;i++){
        if(preX[i] % 2 == 0){
            if(preCnt[i] > mx){
                l = 0;
                r = n-i;
                mx = preCnt[i];
            }
            continue;
        }

        if(i == pi){
            continue;
        }

        int cnt = preCnt[i]-preCnt[pi];
        if(cnt > mx){
            mx = cnt;
            l = pi;
            r = n-i;

        }
    }

    return {l,r,mx};
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> v(n+1);

    for(int i = 1;i<= n;i++){
        cin >> v[i];
    }
    v.push_back(0);

    vector<int> res = {n,0,0};

    
    int l = 1;
    int r = 1;
    while(l<= n){
        if(v[l] == 0){
            l++;
            continue;
        }

        r = l;
        
        vector<int> stk = {0};
        vector<int> rstk;
        while(v[r] != 0){
            stk.push_back(v[r]);
            rstk.push_back(v[r]);
            r++;
        }
        vector<int> fres = f(stk);
        
        r--;
        if(fres[2] >res[2]){
            
            res[0] = fres[0] + (l-1);
            res[1] = fres[1] + (n-r);
            res[2] = fres[2];
        }


        l = r+1;
    }



    cout << res[0] << " " << res[1] << endl;
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