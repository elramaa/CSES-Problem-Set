#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll y, x;
		cin >> y >> x;
		ll high = max(y,x), low = min(y,x);	
		if((high & 1 && y > x) || (!(high & 1) && x > y)) cout << (high*high) - (high * 2 - low - 1);
		else cout << high*high - (low - 1);
		cout << "\n";
	}
	return 0;
}