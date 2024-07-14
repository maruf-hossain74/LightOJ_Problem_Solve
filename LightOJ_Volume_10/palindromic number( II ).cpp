#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

int t = 1, cs = 0;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;

    while(t--) {
        cout << "Case " << ++cs << ": ";
        string s; cin>> s;
        string k = s;
        reverse(k.begin(), k.end());
        if(s == k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}
