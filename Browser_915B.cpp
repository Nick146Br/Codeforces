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
    int a, b, pos, n;
    cin >> n >> pos >> a >> b;
    
    // int mi = min(abs(pos-a), abs(pos-b));
    int res = 0;
    if(a == 1 && b == n){
        res = 0;
    }
    else if(a==1 && b != n){
        res = abs(b - pos);
        res += 1;
    }
    else if(b==n && a != 1){
        res = abs(pos - a);
        res += 1;
    }
    else{
        
        res+=2;
        res += min(abs(pos-a), abs(pos-b));
        res += b-a;

    }
    cout << res << "\n";
    

}