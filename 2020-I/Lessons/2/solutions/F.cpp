#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n; cin >> n;
	map<int, int> M;
	int num;
	for(int i=0; i<n; i++){
		cin >> num;
		M[num]++;
	}
	auto it = M.begin();
	int cont = 0;
	for(; it != M.end(); it++){
		if((*it).first < (*it).second)
			cont += (*it).second - (*it).first;
		else if ((*it).first > (*it).second)
			cont += (*it).second;
	}
	cout << cont;
	
	return 0;
}