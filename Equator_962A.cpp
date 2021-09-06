#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n;
    vector <ll> v(n);
    ll soma = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        soma += v[i];
    }
    int d = 0;
    ll soma2 = 0;
    ll metade = (soma % 2) ? soma/2 + 1 : soma/2;
    for(; d < n; d++){
        if(soma2>=metade){
            break;
        }
        soma2 += v[d];
    }
    cout << d << "\n";
} 