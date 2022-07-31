#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll N;
    ll all = 0;
    ll comp = 0;
    string s;
    cin >> N;
    cin >> s;
    // bool flag = false;
    ll cnt = 1;
    char c = s[0];
    vector<pair<char, ll>> a;
    
    for(int i=1; i<N; i++){
        if(s[i-1] != s[i]){
            pair <char, ll> p = make_pair(c, cnt);
            a.push_back(p);
            c = s[i];
            cnt = 1;
        }else{
            cnt++;
        }
    }
    pair <char, ll> p = make_pair(c, cnt);
    a.push_back(p);
    // for(int i=0; i<a.size(); i++){
    //     cout << a[i].first << endl;
    //     cout << a[i].second << endl;
    // }

    all = (N)*(N+1)/2;
    for(int i=0; i<a.size(); i++){
        comp += a[i].second*(a[i].second + 1LL)/2LL;
    }
    cout << all - comp << endl;
}