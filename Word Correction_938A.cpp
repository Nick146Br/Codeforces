#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

bool isvowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')return true;
    return false; 
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 1;
    while(i < s.size()){
        if(i >=1  && isvowel(s[i]) && isvowel(s[i-1])){
            s.erase(s.begin() + i);
            i--;
        }
        i++;
    }
    cout << s << "\n";
}