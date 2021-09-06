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
    ll n, x, k;
    ll soma = 0;
    cin >> n >> k;
    vector <ll> v(n), zeros(n, 0);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    for(ll i = 0; i < n; i++){
        cin >> x;
        if(x==1){
            soma+=v[i];
            if(i!=0)zeros[i] = zeros[i-1];
        }
        else{
            if(i==0)zeros[i] = v[i];
            else zeros[i] = zeros[i-1] + v[i];
        }
    }
    ll ma = 0;
    for(int i = 0; i + k - 1 < n; i++){
        ll res = (i-1 >= 0) ? zeros[i+k-1]-zeros[i-1] : zeros[i+k-1];
        ma = max(ma, res+soma);
    }
    cout << ma << "\n";
} 