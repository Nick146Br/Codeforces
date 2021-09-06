#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    int n, b, a;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int a1 = a, b1 = b;
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            if(a1>=b1){
                if((i==0 || s[i-1] != 'A') && a1 > 0){
                    s[i] = 'A';
                    cont++;
                    a1--;
                }
                else if((i==0 || s[i-1] != 'B') && b1 > 0){
                    s[i] = 'B';
                    b1--;
                    cont++;
                }
            }
            else{
                if((i==0 || s[i-1] != 'B') && b1 > 0){
                    s[i] = 'B';
                    b1--;
                    cont++;
                }
                else if((i==0 || s[i-1] != 'A') && a1 > 0){
                    s[i] = 'A';
                    a1--;
                    cont++;
                }
            }
        }
    }
    cout << cont << "\n";


}