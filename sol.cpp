#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin >> k;
	vector<int> a(12);
	for (int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	// sort the vector in non-increasing order
	sort(a.rbegin(), a.rend());
	// create 'minimum_months' variable to store the centimeters
	int minimum_months = 0;
	// create 'cnt' variable to count the number of the months needed (minimum)
	int cnt = 0;
	for (int i = 0; i < (int) a.size(); i++) {
		if (minimum_months < k) {
			// if 'minimum_months' is STRICTLY less than 'k', then add the
			// current element ('a[i]') to it, and increment 'cnt'
			minimum_months += a[i];
			cnt++;
		}
	}
	// if 'minimum_months' is greater than or equal to 'k',
	// then print the value of 'cnt', otherwise, print -1
	cout << (minimum_months >= k ? cnt : -1) << '\n';
	return 0;
}
