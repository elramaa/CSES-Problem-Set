#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n;
	cin >> n;
	cout << n << " ";
	while(n != 1){
		n = (n&1 ? n*3 + 1 : n/2);
		cout << n << " ";
	}
	return 0;
}