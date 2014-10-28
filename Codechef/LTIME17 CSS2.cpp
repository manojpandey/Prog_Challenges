#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MAX 111111
LL a[MAX];

int main(){
	
    LL n, m, ans, a, i;
    cin >> n >> m;
    LL id[n], attr[n], val[n], p[n];
    for( i = 0 ; i < n ; i++ )
        cin >> id[i] >> attr [i] >> val[i] >> p[i];
    LL x, y, j, max = 0;
    for( i = 0 ; i<m ; i++) {
        max=0;
        cin >> x >> y;
        for(j=0 ; j<n ; j++) {
            if(x == id[j] && y == attr[j]) {
                if(max <= p[j]) {
                    ans = val[j];
                    max = p[j];
                }
            }
        }
        cout << ans << endl ;
    }
	return 0;
}