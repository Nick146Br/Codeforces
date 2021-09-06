#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007;
#define MAX 100001
typedef long long ll;
int w;
int dp[MAX];
int getAns(int n){

    if(dp[n] != -1)return dp[n];
    if(n==0)return dp[n] = 1;  
    int ans = 0;
    if(n-w >= 0){
        ans += getAns(n-w);
        ans %= mod;
    }
    ans += (n>0) ? getAns(n-1) : 0;
    ans %= mod;
    
    
    return dp[n] = ans % mod;

}
main(){
    int t, a, b;
    cin >> t >> w;
    int sum[MAX] = {0};
    for(int i = 0; i < MAX; i++){
        dp[i] = -1;
    }
    for(int i = 1; i < MAX; i++){
        sum[i] = sum[i-1] + getAns(i);
        sum[i] %= mod;
    }
    while(t--){
        cin >> a >> b;
      
        int res = sum[b] - sum[a-1] + mod;
        res %= mod;
        cout << res << "\n";
    }
}