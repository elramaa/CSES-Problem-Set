#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k;
	int count = 0;
	cin >> n >> m >> k;
	int a[n], b[m];
	for(int i = 0; i < n; ++i) cin >> a[i];
	for(int i = 0; i < m; ++i) cin >> b[i];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; j++){
			if((b[j] - k) <= a[i] && a[i] <= (b[j] + k)){
				b[j] = -1000;
				count++;
				break;
			}
		}
	}
	cout << count;
	return 0;
}