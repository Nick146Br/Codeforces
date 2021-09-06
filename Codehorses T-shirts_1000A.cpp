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
    int n, m, a, k;
    cin >> n;
    map<string,int> mp1, mp2;
    
    string x;
    for(int i = 0; i < n; i++){
        cin >> x;
        mp1[x]++;
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        mp2[x]++;
    }
    vector<string> v = {"M", "S", "L" , "XL", "XS", "XXL", "XXS", "XXXS", "XXXL"};
    
    for(int i = 0; i < v.size(); i++){
        int res = min(mp1[v[i]], mp2[v[i]]);
        mp1[v[i]] -= res;
        mp2[v[i]] -= res;
    }
    int cont = 0;
    for(int i = 0; i < v.size(); i++){
        cont+=mp1[v[i]];
    }
    
    cout << cont << "\n";

}