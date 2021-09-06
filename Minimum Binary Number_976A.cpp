#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
    int n, b, a;
    cin >> n;
    string s;
    cin >> s;
    int cont1 = 0;
    int cont0 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1')cont1++;
        else if(s[i] == '0')cont0++;
    }
    if(cont1 > 0){
        string a;
        a.push_back('1');
        while(cont0--){
            a.push_back('0');
        }
        cout << a << "\n";
    }
    else cout << "0\n";


}