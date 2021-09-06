#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, x;
    cin >> n >> m;
    vec v, soma0(n+2), soma1(n+2);
    v.push_back(0);
    for(int i = 0; i<n ;i++){
        cin >> x;
        v.push_back(x);
    }
    v.push_back(m);

    soma1[0] = 0;
    int ind1 = 0;
    for(int i = 1; i < v.size(); i+=2){
        if(i>1)soma1[i-1] = soma1[i-2]; 
        soma1[i] = soma1[i-1] + v[i]-v[i-1];
    }
    if((v.size()%2))soma1[n+1] = soma1[n];
    soma0[0] = 0;
    soma0[1] = 0;
    for(int i = 2; i < v.size(); i+=2){
        if(i>1)soma0[i-1] = soma0[i-2]; 
        soma0[i] = soma0[i-1] + v[i]-v[i-1];
    }
    if((v.size()%2) == 0)soma0[n+1] = soma0[n];

    int res = soma1[n+1];

    for(int i = 2; i < v.size(); i+=2){
        res = max(res, soma1[i-1] + v[i]-v[i-1]-1 + soma0[n+1] - soma0[i]);
    }
    res = max(res, soma0[n+1] + v[0]-1);
    res = max(res, soma1[n+1] + soma0[n+1] - soma0[n] - 1);
    
    cout << res << endl;
}