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
    ll t, n, x;
    cin >> n;
    ll soma = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        soma += abs(x);
    }
    cout << soma << "\n";

}