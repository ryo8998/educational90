#include <bits/stdc++.h>
using namespace std;

vector<int> getCordinate(int L ,double T, double E){
    vector<int> coordinate(3);
    double zeroPoint = 4/3 * M_PI;
    int z = int(sin(zeroPoint - (E/T) * M_PI)) + L/2;
    int y = int(cos(zeroPoint - (E/T) * M_PI));
    coordinate[0] = 0;
    coordinate[1] = y;   
    coordinate[2] = z;   
    return coordinate;
}


int main(){
    int T,L,X,Y,Q;
    // cin >> T >> L >> X >> Y>> Q;
    vector<int> coordinate;
    coordinate = getCordinate(2,3,1);
    cout << coordinate[0] << endl;
    cout << coordinate[1] << endl;
    cout << coordinate[2] << endl;


}