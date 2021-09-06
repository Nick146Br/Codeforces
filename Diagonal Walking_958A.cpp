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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 1;
    while(i < s.size()){
        if((s[i] == 'R' && s[i-1] == 'U') 
        || (s[i] == 'U' && s[i-1] == 'R')){
            s[i-1] = 'D';
            s.erase(s.begin()+i);
        }
        i++;
    }
    cout << s.size() << "\n";
    return 0;
} 