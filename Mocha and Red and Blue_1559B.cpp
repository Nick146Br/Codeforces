#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string aux = s, aux2 = s;
        string res = "";
        for(int i = 0; i < n; i++){

            if(aux[i] == '?'){
                if(i == 0 || aux[i-1] == 'R'){
                    aux[i] = 'B';
                }
                else if(i == 0 || aux[i-1] == 'B'){
                    aux[i] = 'R';
                }

                if(i == 0 || aux2[i-1] == 'B'){
                    aux2[i] = 'R';
                }
                else if(i == 0 || aux2[i-1] == 'R'){
                    aux2[i] = 'B';
                }
            }
            else{
                if((aux[i] == 'R' && aux[i-1] == 'B')
                || (aux[i] == 'B' && aux[i-1] == 'R')){
                    s = aux;
                }
                else{
                    s = aux2;
                }
                aux = s;
                aux2 = s;
            }
        }
        s = aux;
        cout << s << "\n";
    }
}