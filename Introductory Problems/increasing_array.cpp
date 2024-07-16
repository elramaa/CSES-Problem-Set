#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin >> n;
	ll o = 0;
	ll x[n];
	ll min = 0;
	for(int i = 0; i < n; ++i){
		cin >> x[i];
		if(x[i] > min) min = x[i];
		else o += min - x[i];
	}
	cout << o;
	return 0;
}