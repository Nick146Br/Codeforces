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
    int i = 0;
    string a, b;
    int ma = 1;
    for(int i = 1; i < s.size(); i++){
        a = s.substr(0, i);
        b = s.substr(i, a.size());
        int x = a.size();
        if(a==b)ma = max(ma, x);
    }
    cout << s.size() - ma + 1 << "\n";
    return 0;
} 