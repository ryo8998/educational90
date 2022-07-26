#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    long long count = 0;
    vector< vector<long long>> A(H+1,vector<long long>(W+1));
    vector< vector<long long>> B(H+1, vector<long long>(W+1));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> B[i][j];
        }
    }
    for(int i=0; i<H-1; i++){
        for(int j=0; j<W-1; j++){
            long long diff = A[i][j] - B[i][j];
            // cout  << "i " << i <<endl;
            // cout  << "j " << j <<endl;
            // cout << diff << endl;
            if(diff > 0){
                count += diff;
                A[i][j] -= diff;
                A[i+1][j] -=diff;
                A[i][j+1] -=diff;
                A[i+1][j+1] -=diff;
            }
            if(diff < 0){
                count -= diff;
                A[i][j] -= diff;
                A[i+1][j] -=diff;
                A[i][j+1] -=diff;
                A[i+1][j+1] -=diff;
            }
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
                // cout << "A " << A[i][j] << " B " << B[i][j] << ", ";
            if(A[i][j] != B[i][j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    cout << count << endl;
}