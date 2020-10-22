#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[1000010];

int main(){
	ll n;	
	cin>>n;
	for(ll i=0;i<n;i++) cin>>a[i];
	// El algoritmo en n^2 da time limit ya que n<=10^5
	// entonces, n^2<=10^10 (time limit)
	ll ans=0;
	for(ll bit=0;bit<21;bit++){
		ll unos=0,zeros=0;
		for(ll i=0;i<n;i++){
			// "">>"" es un operador binario a nivel de bits
			// lo que hace es "deslizar" el numero
			// una cantidad de bits a la derecha
			//  es decir, si el numero es 1010010 
			//  y hago "1010010>>3", entonces 
			// 1010010>>3 = 0001010
			// mas informacion google "operadores a nivel de bits c++"
			if( (a[i]>>bit)&1 ) unos++; // esto me dice si el bit-esimo bit e 1 o 0
			else zeros++; 
		}
		// esto hace todo el problema
		// xor es una operacion que 1 xor 0 = 1 y 0 xor 1 = 1
		// los bits que se comparan son siempre los bits
		// que estan en la misma posicion 
		// en cada iteracion comparos los "bit-esimos bits"
		// y solo necesito saber cuantos pares (1,0) tengo
		ans += (unos*zeros)*(1LL<<bit);
	}
	cout<<ans<<endl;
} 
