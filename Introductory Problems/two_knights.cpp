#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	for(ll i = 1; i <= n; ++i){	
		if(i == 1){
			cout << 0 << "\n";
			continue;
		}
		if(i == 2){
			cout << 6 << "\n";
			continue;
		}
		cout << ((pow(i, 2) - 1)*pow(i, 2))/2 - 4*(pow(i-2, 2)+(i-2));
		cout << "\n";
	}
	return 0;
}