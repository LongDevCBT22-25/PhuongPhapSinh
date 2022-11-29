#include <bits/stdc++.h>
#define int long long
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n,i;
string s;
void input(){
    FastIO;
    freopen("binary.inp", "r", stdin);
    freopen("binary.out", "w", stdout);
    cin >> n;
}
void sol(){
    s.assign(n, '0');
    do{
        cout << s << '\n';
        i = n - 1;
        while(s[i] == '1' && i > -1) i--;
        if(i >= 0){
            s[i] = '1';
            if(i < n - 1) 
                for(int j = i + 1; j < n; j++) 
                    s[j] ='0';
        }else return;
    } while(1);
}
int32_t main(){
    input();
    sol();
}