#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
 int num[n];
 int total=0,prod;



  for (int i = 0; i < n; i++) {
    cin >> num[i];
    total += num[i];
  }

long square = 0;
	long ans = total * square;
	for (int i = 0; i < n; i++) {
		total -= num[i];
		square += num[i] * num[i];
		ans = max(ans, total * square);
	}

	cout << ans;
 return 0;
}