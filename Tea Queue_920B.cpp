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
        int n, a, b;
        cin >> n;
        vep v;

        for(int i = 0; i < n; i++){
            cin >> a >> b;
            v.push_back({a,b});
        }

        vec cont;
        int l = 0;
        int s = v[0].first;
        for(int j = 0; j < n; j++){
            if(s > v[j].second){
                cont.push_back(0);
            }
            else{
                if(s < v[j].first)s = v[j].first;
                cont.push_back(s);
                s++;
            }
        }
        int flag = 0;
        for(auto x: cont){
            if(flag)cout << " ";
            cout << x;
            flag = 1;
        }
        cout << "\n";
    }
    
}