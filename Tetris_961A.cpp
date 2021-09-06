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
    cin >> n >> k;
    int x, points = 0;
    vec v(n, 0);
    for(int i = 0; i < k; i++){
        cin >> x;
        x--;
        v[x]++;
        int num = 0;
        for(int i = 0; i < n; i++){
            if(v[i])num++;
        }
        if(num == v.size()){
            for(int i = 0; i < n; i++){
                v[i]--;
            }
            points++;
        }
    }
    cout << points << "\n";
    return 0;
} 