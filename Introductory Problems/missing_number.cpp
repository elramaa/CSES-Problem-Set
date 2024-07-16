#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){	
	ll n, num;
	ll sum = 0;
	cin >> n;
	for(int i = n; i > 1; --i){
		cin >> num;
		sum += num;
	}
	cout << n*(n+1)/2 - sum;
	return 0;
}