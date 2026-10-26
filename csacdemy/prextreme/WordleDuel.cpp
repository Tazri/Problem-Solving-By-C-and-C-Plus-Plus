#include <bits/stdc++.h>

using namespace std;
int n,len;
set<char> block;
set<char> allowed;
string pattern;
set<string> v;

bool gameEnd = false;

void doFilter(){
    vector<string> words;
    for(string word:v){
        words.push_back(word);
    }

    for(string word:words){
        for(int j= 0;j < len;j++){
            if(pattern[j] != '?' && pattern[j] != word[j]){
                v.erase(word);
                break;
            }

            if(block.count(word[j])){
                v.erase(word);
                break;
            }

            set<char> seen;
            int cnt = 0;
            for(char ch:word){
                if(seen.count(ch))continue;

                seen.insert(ch);

                if(allowed.count(ch))
                cnt++;
            }

            if(cnt != allowed.size()){
                v.erase(word);
                break;
            }
        }
    }
}

void doUpdate(string word,string res){
    for(int i = 0;i < len;i++){
        if(res[i] == 'Y'){
            allowed.insert(word[i]);
        }else if(res[i] == 'B'){
            block.insert(word[i]);
        }else{
            pattern[i] = word[i];
        }
    }
    v.erase(word);
}

void myTurn(string word){
    string temp;
    cin >> temp;

    cout <<"GUESS " << word << endl;
    string res;
    cin >> temp;
    cin >> res;
    
    doUpdate(word,res);
    doFilter();
}

void oppTurn(){
    string temp;
    cin >> temp;
    string word,res;
    cin>> word >> res;
    doUpdate(word,res);
    doFilter();
}

void Program(int caseno)
{

    string temp;
    cin >> temp;
    cin >>n >> len;

    pattern = string(len,'?');
    for(int i = 0;i < n;i++){
        string word;
        cin >> word;
        v.insert(word);
    }

    while(true){
        string turn;
        cin >> turn;

        if(turn == "TURN"){
            string word = *(v.begin());
            myTurn(word);
        }else if(turn == "OPP"){
            oppTurn();
        }else if(turn == "GAME_END"){
            return;
        }
    }
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++)
        Program(i);
    return 0;
}