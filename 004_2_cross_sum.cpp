#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<int>> B(H, vector<int>(W));
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }
    }

    vector<int> sumH(W);
    vector<int> sumW(H);
    for(int j = 0; j < W; j++)
    {
        for(int i = 0; i < H; i++)
        {
            sumH[j] += A[i][j];
        }
    }
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            sumW[i] += A[i][j];
        }
    }

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            B[i][j] = sumH[j] + sumW[i] - A[i][j];
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}