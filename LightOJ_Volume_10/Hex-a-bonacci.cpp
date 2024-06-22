#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int a, b, c, d, e, f;
int m = 10000007;
int dp[10005];
int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if (dp[n] != -1) return dp[n];
    return dp[n] = (((fn(n-1) + fn(n-2))%m + (fn(n-3) + fn(n-4))%m)%m + (fn(n-5) + fn(n-6))%m)%m;
}
int32_t main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(dp, -1, sizeof(dp));
        cin>> a>> b>> c>> d>> e>> f>> n; 
        int ans = fn(n)%m;
        cout << "Case " << caseno << ": " << ans << endl;
    }
    return 0;
}
