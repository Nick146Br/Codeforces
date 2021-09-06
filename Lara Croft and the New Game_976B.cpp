#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll i = 1, j = 1; 

    if(k <= n-1){
        i = k + 1;
        j = 1;
    }
    else if(k <= n+m-2){
        i = n;
        j = k - (n - 1) + 1;
    }
    else{
        i = n;
        j = m;
        ll aux = k;
        k -= n+m-2;
        int flag = 0;
        ll div = k/(m-1);
        i-= div;
        ll rt = k%(m-1);
        if(rt>0){
            i--;
            if(div % 2)j = 2+rt-1;
            else j = m-(rt-1);
        }
        else{
            if(div % 2)j = 2;
            else j = m;
        }
        
    }
    cout << i << " " << j << "\n";



    return 0;
}