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
        ll n;
        cin >> n;
        vector <ll> v(n);
        ll ma = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(i>0){
                ma = max(ma, v[i]*v[i-1]);
            }
        }
        cout << ma << "\n";
    }

}