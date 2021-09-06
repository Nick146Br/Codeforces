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
    int t, n, x;
    cin >> n;
    int mi = INT_MAX;
    int ma = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        ma = max(ma, min(x - 1, 1000000 - x));
    }
    cout << ma << "\n";

}