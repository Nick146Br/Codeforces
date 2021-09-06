#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;
#define mod 1000000007
int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    ll n, m, a ,b;
    cin >> n >> m >> a >> b;
    ll aux = n;
    ll res = n%m;
    if(res == 0)cout << "0\n";
    else{
        cout << min((m-res)*a, res*b) << "\n";
    }
 
}
