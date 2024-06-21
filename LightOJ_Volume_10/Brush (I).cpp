
#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    int i = 1;
    while(t--) {
        int n, x; cin>> n;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin>> x;
            if(x > 0) ans += x;
        }
        cout <<"Case " << i << ": " << ans << endl;
        i++;
    }
	return 0;
}
