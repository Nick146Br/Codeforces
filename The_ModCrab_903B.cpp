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
    int a1, h1, c1, h2, a2;
    cin >> h1 >> a1 >> c1;
    cin >> h2 >> a2;
    int cont = 0;
    vector <string> v;
    while(h2>0){

        if(h1 <= a2 && h2 > a1){
            v.push_back("HEAL");
            h1 += c1;
        }
        else{
            v.push_back("STRIKE");
            h2 -= a1;
        }
        if(h2 <= 0)break;

        h1 -= a2;
    }
    cout << v.size() << "\n";
    for(auto x: v){
        cout << x << "\n";
    }
}