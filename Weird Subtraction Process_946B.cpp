#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;
ll a, b;

void step2();
void step3();
 
void step1(){
    if(a==0 || b==0)return;
    step2();
}
void step2(){
    if(a>=2*b){
        ll div = a/b;
        ll mul = div/2;
        mul*=2;
        a = a-mul*b;
        step1();
    }
    else step3();
}
void step3(){
    if(b>=2*a){
        ll div = b/a;
        ll mul = div/2;
        mul*=2;
        b = b-mul*a;
        step1();
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    
    step1();
    cout << a << " " << b << "\n";
    return 0;
} 