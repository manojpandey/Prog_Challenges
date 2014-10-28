#include <bits/stdc++.h>
 
using namespace std;
typedef long long LL;
#define MAX 111111
LL A[MAX];

LL be(LL b, LL e) {
	LL i, res=1;
	for (i=0 ; i<e ; i++){
		res = res * b;
	}
	return res;
}

int main() {

	LL t, n, f, i, j, ctr, temp;	
	cin >> t;
	while (t--) {
		cin >> n >> f;
		for(i=0; i<n; i++) cin >> A[i];
		
		sort(A, A+n);
		reverse(A, A+n);
		
		ctr = 0;
		for (i=0 ; i < n ; i++) {
			temp = A[i];
			while(temp!=0 && (temp/f)*f==temp){
				
				for(j=i+1 ; j < n ; j++){
					if(A[j]==temp){
						ctr++;
						//temp/=f;
					}

					if(A[j]<temp) continue;
					if(A[j] % f != 0) 
						j++;
				} temp = temp/(be(f, i));
			} 
		}
		cout << ctr << endl ;
	}
	return 0;
}