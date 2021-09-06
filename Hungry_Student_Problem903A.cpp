#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int gdc(int a, int b){
    if(b==0)return a;
    return gdc(b, a%b);
}
int mmc(int a, int b){
    return a*b/gdc(a,b);
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n;
    vec v;

    for(int a = 0; a <= 100; a+=3){
        for(int b=0; b <= 100; b+=7){
            if(a+b <= 100)v.push_back(a+b);
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cin >> x;
        int ind = lower_bound(v.begin(), v.end(), x) - v.begin();
        if(ind == v.size() || v[ind] != x)cout << "NO\n"; 
        else cout << "YES\n";
    }
    
}