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
    cin >> n >> k;
    vec v;
    map <int, int> mp;
    int x;
    for(int i =0; i < n; i++){
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    sort(v.begin(), v.end());
    int cont = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] > v[i-1] && v[i] <= v[i-1] + k){
            cont+=mp[v[i-1]];
        }
    }
    int res = v.size()-cont;
    cout << res << "\n";

}