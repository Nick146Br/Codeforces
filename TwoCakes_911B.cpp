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
    int a, b, n;
    cin >> n >> a >> b;
    int aux = a;
    int ma = 0;
    for(int i = 1; i < n; i++){
        int div = a/i;
        int div2 = b/(n-i);
        ma = max(ma, min(div, div2));
    }
    cout << ma << "\n";
}