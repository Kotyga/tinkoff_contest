#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll n;
vector<ll> vec;
ll temp = -ll(2e9);
 
int main() {
    iostream::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    vec.resize(n);
    for (ll i = 0; i < n; i++) {
    	cin >> vec[i];
    	vec[i] = abs(vec[i]);
		if (-vec[i] >= temp) vec[i] = -vec[i];
    	if (vec[i] < temp) return cout << "No\n", 0;
    	temp = vec[i];
    }
    cout << "Yes\n";
    for (ll i = 0; i < n; i++) cout << vec[i] << " ";
	return cout << "\n", 0;
}