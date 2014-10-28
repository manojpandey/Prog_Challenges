#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
#define MAX 111111
LL A[MAX];

int main() {
	LL t, n;
	string str;
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> str;
		
		//Remove Duplicates
		std::sort(str.begin(), str.end());
		str.erase(std::unique(str.begin(), str.end()), str.end());
		
//		cout << str << endl;
		if (str.at(0) == 'I') cout << "INDIAN" << endl;
		else if (str == "Y") cout << "NOT INDIAN" << endl;
		else if (str == "N") cout << "NOT SURE" << endl;
		else if (str.at(0) == 'N') cout << "NOT INDIAN" << endl;
	
	}
	return 0;
}