#include <bits/stdc++.h>
using namespace std;
// not a clean code, i even dont know why is it working

int main(){
	string str;
	int count = 1;
	int prevCount = 1;
	cin >> str;
	for(int i = 1; i < str.length(); ++i){
		if(str[i] != str[i-1]){
			prevCount = max(prevCount, count);
			count = 0;
		}
		count++;
	}
	cout << max(prevCount, count);
	return 0;
}