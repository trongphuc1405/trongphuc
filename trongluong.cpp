#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int A[n+1], ans = -1000;
	    for(int i = 1; i <= n; i++){
		    cin >> A[i];
		    ans = max(ans, A[i]);
	    }
	    int F[n+1]; F[0] = 0;
	    for(int i = 1; i <= n; i++){
		    F[i] = max(A[i], F[i-1]+A[i]);
		    ans = max(ans, F[i]);
	    }
	    cout << ans << endl;
	}
	
}
