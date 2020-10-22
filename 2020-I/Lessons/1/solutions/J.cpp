#include <bits/stdc++.h>
using namespace std;

string t="Tetrahedron" , c= "Cube", o= "Octahedron", d= "Dodecahedron", i="Icosahedron";

int main() {
	int n, cont = 0;
	string x;
	cin>>n;
	while(n--){
		cin>>x;
		if(x==t){
			cont+=4;
		}
		if(x==c){
			cont+=6;
		}
		if(x==o){
			cont+=8;
		}
		if(x==d){
			cont+=12;
		}
		if(x==i){
			cont+=20;
		}
	}
	cout<<cont<<endl;
	
	return 0;
}