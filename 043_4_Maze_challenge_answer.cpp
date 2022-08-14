#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
struct state {
    int x, y, dir;
};

int main(){
    int H,W;
    cin >> H >> W;
    deque<state> d;
    vector<string> board(H);
    vector<vector <vector <int > > >dp(H,vector<vector<int>>(W,vector<int>(4,INT_MAX)));
    int rs,rt,cs,ct;
    cin >> rs >> cs;
    cin >> rt >> ct;
    rs--;
    rt--;
    cs--;
    ct--;
    for(int i=0; i<H; i++){
        cin >> board[i];
    }
    for(int i=0; i<4; i++){
        dp[rs][cs][i] = 0;
        d.push_back({rs,cs,i});
    }

    while(!d.empty()){
        state u = d.front();
        d.pop_front();
        for(int i=0; i<4; i++){
            int tx = u.x + DX[i];
            int ty = u.y + DY[i];
            int cost = dp[u.x][u.y][u.dir] + (u.dir != i? 1:0);
            if(0 <= tx && tx < H && 0 <=ty && ty < W && board[tx][ty] == '.' && dp[tx][ty][i] > cost){
                dp[tx][ty][i] = cost;
                if(u.dir != i){
                    d.push_back({tx,ty, i});
                }else{
                    d.push_front({tx, ty, i});
                    // cout << tx << endl;
                }
            }
        }
    }

    int ans = INT_MAX;
    for(int i=0; i<4; i++){
        ans = min(ans, dp[rt][ct][i]);
    }
    cout << ans << endl;
}