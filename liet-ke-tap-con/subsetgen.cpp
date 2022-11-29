#include <bits/stdc++.h>
#define FastIO ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;
int n, k, x[1000];
void input(){
    FastIO;
    freopen("subsetgen.inp", "r", stdin);
    freopen("subsetgen.out", "w", stdout);
    cin >> n >> k;
}
void sol(){
    for(int i = 1; i <= k; i++) 
        x[i] = i;
    do{
        cout << '{';
        for(int i = 1; i <= k; i++)
            ((i < k) 
                ? cout << x[i] << ", " 
                : cout << x[i] << '}' << '\n');
        int i = k;
        while((i > 0) && (x[i] == n - k + i)) i--;
        if(i > 0){
            x[i]++;
            for(int j = i + 1; j <= k; j++)
                x[j] = x[j - 1] + 1;
        } else return;
    }while(1);
}
int32_t main(){
    input();
    sol();
}