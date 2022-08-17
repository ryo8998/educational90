#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
int ans = -1;
int cnt = 0;

void railways(int H, int W, int starty, int startx, int py, int px, int y,int x, vector<vector<bool>> &visited,vector<string> &rail){
    
    for(int i=0; i<4; i++){
        int nx,ny;
        ny = y + DY[i];
        nx = x + DX[i];
        // cout << ny << endl;
        // cout << nx << endl;
        
        if(ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
        if(rail[ny][nx] == '#') continue;
            if(nx == startx && ny == starty && py != starty && px != startx){
                ans = max(ans,cnt);
            }else{
            if(visited[ny][nx])continue;
            visited[ny][nx] = true;
            cnt++;
            railways(H,W,starty, startx,y,x,ny,nx,visited,rail);
            visited[ny][nx] = false;
            cnt--;
        }

    }
}

int main(){
    int H, W;
    cin >> H >> W;
    // int ans = 0;
    vector<string> rail(H);
    for(int i=0; i<H; i++){
        cin >> rail[i];
    }
    // cout << rail[0];
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            vector<vector<bool>> visited(H,vector<bool>(W,false));
            if(rail[i][j] != '#'){
                visited[i][j] = true;
                cnt++;
                railways(H,W,i,j,-1,-1,i,j,visited,rail);
                visited[i][j] = false;
                cnt--;
            }
        }
    }
    cout << ans << endl;

}