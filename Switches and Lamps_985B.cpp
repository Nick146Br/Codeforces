#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

#define MAX 2001
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, m;
    cin >> n >> m;
    int M[MAX][MAX];
    vec l (m+1, 0);
    int cont = 0;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < m; j++){
            M[i][j] = (int)s[j] - 48;
            if(M[i][j]) l[j]++;
        }
    }
    int flag = 0;
    for(int i = 0; i < n; i++){
        vec aux = l;

        for(int j = 0; j < m; j++){
            if(M[i][j]) aux[j]--;
        }
        int cont = 0;
        for(int j = 0; j < m; j++){
            if(aux[j] > 0)cont++;
        }
        if(cont == m){
            flag = 1;
            break;
        }
        
    }
    if(flag)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}