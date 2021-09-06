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
    string s;
    cin >> s;
    int meio = 0;
    int i = s.size()-1;
    while(s[i] == '0'){
        s.erase(s.begin()+i);
        i--;
    }
    meio = (s.size()%2) ? s.size()/2 : s.size()/2 - 1;
    i = (s.size()%2) ? s.size()/2 : s.size()/2 - 1;
    int j = s.size()/2; 
    while(i >= 0 && j < s.size() && s[i] == s[j]){
        i--;
        j++;
    }
    if(i < 0 && j == s.size()){
        cout << "YES\n";
    }
    else cout << "NO\n";
}