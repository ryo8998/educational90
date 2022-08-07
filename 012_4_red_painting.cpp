#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

    struct UnionFind{
        vector<ll> parent;
        vector<bool> red;
        vector<ll >size;

        UnionFind(int h, int w): parent(h*w, -1), red(h*w,false){} //size(h*w, 1),

        int root(int x){
            if(parent[x] == -1){
                return x;
            }else{
                return parent[x] = root(parent[x]);
            }
        }

        bool issame(int x, int y){
            return root(x) == root(y);
        }

        void unite(int x, int y){
            x = root(x);
            y = root(y);
            if(x == y) return;
            // if(size[x] < size[y]) swap(x,y);
            parent[y] = x;
            // size[x] += size[y];
            // return true;
        }

        int getsize(int x){
            return size[root(x)];
        }       
    };

int main(){
    int H, W;
    int Q;
    cin >> H >> W;
    struct UnionFind uf(H,W);
    cin >> Q;
    for(int i=0; i<Q; i++){
        int q;
        cin >> q;
        if(q == 1){
            ll r,c;
            cin >> r >> c;
            r--;
            c--;
            // uf.parent[r*W+c] = r*W+c;
            uf.red[r*W+c] = true;
            // uf.size[r*W+c]++;
            // cout << r*W + c << endl;
            for (int i = 0; i < 4; i++) {

            int nr = r + DY[i];
            int nc = c + DX[i];
            if(nr < 0 || nr >=H || nc < 0 || nc >=W){
                continue;
            }
            int id2 = nr*W+nc;
                if(uf.red[id2] == true){
                    // cout << r*W+c << "と" << id2 << "を連結" << endl;
                    uf.unite(r*W+c,id2);
                }
            }
            // if(r*W + c - r >= 0){
            //     if(uf.red[r*W+c -r] == true){
            //         uf.unite(r*W+c, r*W+c-r);
            //     }
            //     // uf.red[r*W+c -r] = true;
            //     } 
            // if(r*W + c + r <= H*W -1){
            //     if(uf.red[r*W + c + r]== true){
            //         uf.unite(r*W+c, r*W+c+r);
            //     }
            //  }
            // if(r % W != W-1 && r*W + c -1 >=0){
            //     if(uf.red[r*W + c -1] == true){
            //     uf.unite(r*W+c, r*W + c -1);
            //     }
            // }
            // if(r % W != 0 && r*W + c +1 <= H*W -1){
            //     if(uf.red[r*W + c +1] == true){
            //     uf.unite(r*W+c, r*W + c + 1);
            //     }
            // }

        }
        if(q == 2){
            ll ra,ca,rb,cb;
            cin >> ra >> ca >> rb >> cb;
            ra--;
            ca--;
            rb--;
            cb--;
            if(uf.red[ra*W+ca] == false || uf.red[rb*W+cb] == false){
                cout << "No" << endl;
                continue; 
            }
            // cout << "id1 root " << uf.root(ra*W*ca) << " id 2 root" << uf.root(rb*W*cb) << endl;  
            if(uf.issame(ra*W+ca, rb*W+cb)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    } 
    // for(int i=0; i<H*W; i++){
    // cout << uf.root(i) << " " << endl;
    // if(i % W == W-1){
    //   cout << "\n" << endl;
    // }

// }
}