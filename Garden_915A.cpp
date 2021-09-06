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
    int n, k;
    cin >> n >> k;
    vec v (n);
    int mi = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(!(k%v[i]))mi = min(mi, k/v[i]);
    }
    cout << mi << "\n";

}