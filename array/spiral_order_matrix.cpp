#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> A {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> B;
    int dir = 0;
    int t = 0,l = 0,d = 3-1,r = 3-1;
    while(t <= d && l <= r ){
        if(dir == 0){
            for(int i = l;i <= r;i++){
                B.push_back(A[t][i]);
            }
            t++;
            dir = 1;
        } else if(dir == 1){
            for(int i = t;i <= d;i++){
                B.push_back(A[i][r]);
            }
            r--;
            dir = 2;
        } else if(dir == 2){
            for(int i = r;i >= l;i--){
                B.push_back(A[d][i]);
            }
            d--;
            dir = 3;
        } else if(dir == 3){
            for(int i = d;i >= t;i--){
                B.push_back(A[i][l]);
            }
            l++;
            dir = 0;
        }
        else break;
    }

    for(int i = 0; i < B.size();i++){
        cout << B[i] << " ";
    }

    return 0;
}