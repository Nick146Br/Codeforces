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
        int n;
        cin >> n;
        vec v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int res = v[0];
        for(int i = 1; i < n ;i++){
            res = min(res, res & v[i]);
        }
        cout << res << "\n";
    }
}