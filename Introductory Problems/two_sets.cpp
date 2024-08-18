#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n){
	// The idea is to select the highest number and subtract half of the sum with that number until it reaches 0.
	ll sum = (n*n + n)/2;
	if(sum & 1){
		// Odd number can't be divided into two equal integer
		cout << "NO";
		return;
	}
	set<int> S;
	for(ll curr = sum/2, i = n; curr > 0;){
		S.insert(i);
		curr -= i;
		i = curr; // Get the remaining
		if(i >= n || S.count(i)) i = (*S.cbegin()) - 1; // If bigger than n, set it to the last subtraction number minus one
	}
	// PRINT THE ANSWER
	cout << "YES\n";
	cout << S.size() << "\n";
	for(auto &i: S){
		cout << i << " ";
	}
	cout << "\n";
	cout << n - S.size() << "\n";
	for(ll i = 1; i <= n; ++i){
		if(S.count(i)) continue;
		cout << i << " ";
	}
}

int main(){
	ll n; cin >> n;
	solve(n);
	return 0;
}