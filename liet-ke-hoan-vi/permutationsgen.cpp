#include <bits/stdc++.h>
#define FastIO ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;
int n, x[1000];
void input(){
    FastIO;
    freopen("permutationsgen.inp", "r", stdin);
    freopen("permutationsgen.out", "w", stdout);
    cin >> n;
}
void sol(){
    for(int i = 1; i <= n; i++) 
        x[i] = i;
    do{
        cout << '(';
        for(int i = 1; i <= n; i++) 
            ((i < n) 
                ? cout << x[i] << ", " 
                : cout << x[i] << ')' << '\n');
        int i = n - 1;
        while((i > 0) && (x[i] > x[i + 1])) i--;
        if(i > 0){
            int k = n;
            while(x[k] < x[i]) k--;
            swap(x[k], x[i]);
            int l = i + 1, h = n;
            while(l < h)
                swap(x[l], x[h]),
                l++,
                h--;
        } else return;
    }while(1);
}
int32_t main(){
    input();
    sol();
}