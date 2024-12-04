// link : https://codeforces.com/problemset/problem/381/A
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)

int main()
{
    optimize();
    
    int n;

    cin >> n;

    vector <int>cards(n);

    for(int i = 0;i < n;i++){
        cin >> cards[i];
    }

    int s = 0, d=0;
    int fi = 0, bi= cards.size() -1;
    int &player = s;


    for(int i = 0;i < n;i++){
        if(cards[fi] > cards[bi]){
            if(i & 1) d += cards[fi++];
            else s += cards[fi++];
        }else{
            if(i & 1) d += cards[bi--];
            else s += cards[bi--];
        }
    }

    cout << s << " " << d << endl;

    return 0;
}