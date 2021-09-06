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
    int n, a;
    vep v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    int x = v[0].first;
    int i = 1;
    int mi = INT_MAX;
    while(v[i].first == x){
        mi = min(mi, abs(v[i].second - v[i-1].second));
        i++;
    }
    cout << mi << "\n";
}