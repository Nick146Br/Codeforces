#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k;
        vec v;
    
        for(int i = 0; i < k; i++){
            cin >> x;
            v.push_back(x); 
        }
        int dist = 0;
        dist = v[0];
        for(int i = 1; i < k; i++){
            dist = max(dist , (v[i] - v[i-1])/2 + 1);
        }
        dist = max(dist, n - v[k-1] + 1);

        cout << dist << "\n";
        
    }
}