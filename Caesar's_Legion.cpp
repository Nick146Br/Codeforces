// https://codeforces.com/problemset/problem/118/D
#include <bits/stdc++.h>
using namespace std;

#define mod 100000000;
typedef long long ll;

int k1, k2;
ll dp[101][101][11][11];
int getAns(int f, int h, int x, int y){
    if((f+h)==0)return 1;
    if(dp[f][h][x][y] != -1)return dp[f][h][x][y];
    int a = (f>0 && x>0) ? getAns( f-1, h, x-1, k2) : 0;
    int b = (h>0 && y>0) ? getAns( f, h-1, k1, y-1) : 0;
    return  dp[f][h][x][y] = (a+b)%mod;
}
main(){
    int n1, n2;
    cin >> n1 >> n2 >> k1 >> k2;
    for(int i = 0; i <= n1; i++){
        for(int j = 0; j <= n2; j++){
            for(int k = 0; k <= k1; k++){
                for(int l = 0; l <= k2; l++){
                    dp[i][j][k][l] = -1;
                }
            }
        }
    }
    cout << getAns( n1, n2, k1, k2);
}