#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin >> n;
	ll res = 1;
	ll lim = pow(10, 9) + 7;
	while(n > 0){
		res = res * 2 % lim;
		--n;
	}
	cout << res;
	return 0;
}