#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector <ll> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        ll ma = -INT_MAX;
        for(ll i = max(n-2*k, 0LL); i < n; i++){
            for(int j = i+1; j < n; j++){
                ma = max(ma, (i+1)*(j+1) - k*(v[i]|v[j]));
            }
        }

        cout << ma << "\n";
    }

}