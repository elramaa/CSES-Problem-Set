#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	int mid;
	ll y, x;
	cin >> t;
	while(t > 0){
		cin >> y >> x;
		mid = max(y, x) * (max(y, x) - 1) + 1;
		if(max(y, x))
		--t;
	}
	return 0;
}

// 1 | 1,1

// 2 | 1,2
// 3 | 2,2
// 4 | 2,1

// 5 | 3,1
// 6 | 3,2
// 7 | 3,3
// 8 | 2,3
// 9 | 1,3

// 10 | 1,4
// 11 | 2,4
// 12 | 3,4
// 13 | 4,4
// 14 | 4,3
// 15 | 4,2
// 16 | 4,1

// Pola tengah, 1 3 7 13 21 31
// 2a 3a+b a+b+c

// 2a = 2, a = 1
// 3a + b = 2, b = -1
// a+b+c = 1, c = 1

// an^2 + bn + c =
// n^2 - n + 1
// n*n - n + 1
// n(n-1) + 1


// if max(y, x) genap, row ke atas -1
// else if ganjil, row ke atas +1