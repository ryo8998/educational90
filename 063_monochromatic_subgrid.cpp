#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int count_freq_max(vector<int> &R){
    map <int, int> m;
    int max_num = -1;
    for(int i=0; i<R.size(); i++){
        m[R[i]]+=1;
        // cout << R[i] << " "; 
        // cout << m[R[i]] <<endl; 
        max_num = max(max_num, m[R[i]]);
    }
    // cout << endl;
    return max_num;
}

int main(){
    int H,W;
    cin >> H >> W;
    vector <vector<ll >> grid(H,vector<ll>(W));
    int ans = 0;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> grid[i][j];
        }
    }
    for(int i=1; i<(1<<H); i++){
        vector<int> R;
        for(int j=0; j<W; j++){
            int index = -1; bool flag = false;
            for(int k=0; k<H; k++){
                if((i & (1 << k)) == 0)continue;
                if(index == -1) index = grid[k][j];
                else if(index != grid[k][j]) flag = true;
            }
            if(flag == false){
                R.push_back(index);
            }
        }
        // cout << count_freq_max(R) << endl;
        // cout << "bit " << cnt_bit << endl;
        int cnt_bit = 0;
        for(int l=0; l<H; l++){
            if((i>>l) &1) cnt_bit++;
        }
        // cout << "bit " << cnt_bit << endl;
        // cout << "freq " << count_freq_max(R) << endl;

        if(ans < cnt_bit * count_freq_max(R)){
            ans = cnt_bit * count_freq_max(R);
        }
    }
    cout << ans << endl;
}