#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k, temp;
	int count = 0;
	cin >> n >> m >> k;
	multiset<int> a, b;
	for(int i = 0; i < n; ++i){
		cin >> temp;
		a.insert(temp);
	}
	for(int i = 0; i < m; ++i){
		cin >> temp;
		b.insert(temp);
	}
	for(int i: a){
		for(int j: b){
			if(i - j > k) b.erase(b.find(j));
			if(j - i > k) break;
			if((j - k <= i) && (i <= j + k)){
				b.erase(b.find(j));
				count++;	
				break;
			}
		}
	}
	cout << count;
	return 0;
}