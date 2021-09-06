#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    int n, x;
    cin >> n;

 
    vec v;
    for(int i = 0; i < n/2; i++){
        cin >> x;
        v.push_back(x);
    }
    int cont = 0;
    sort(v.begin(), v.end());

    int k = 2;
    int soma = 0, res = INT_MAX;
    
    for(int i = 0; i < v.size(); i++){
        soma += abs(v[i]-k);
        k+=2;
    }
    res = min(res, soma);
    k = 1;
    soma = 0;
    for(int i = 0; i < v.size(); i++){
        soma += abs(v[i]-k);
        k+=2;
    }
    res = min(res, soma);
    cout << res << "\n";


}