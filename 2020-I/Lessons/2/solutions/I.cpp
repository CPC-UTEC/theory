#include <bits/stdc++.h>
using namespace std;

int main()
{   
	set<long long> pX, pY;
	map<long long, long long> distX, distY;
	set<long long>::iterator it, itR, itL;
	map<long long, long long>::iterator it2;
	long long xMax, yMax, n;
	long long x, y, res;
	long long t;
	scanf("%lld",&t);
	while(t--){
		distX.clear(); distY.clear();
		pX.clear(); pY.clear();
		
		scanf("%lld%lld%lld",&xMax, &yMax, &n);
		
		pX.insert(0); pY.insert(0);
		pX.insert(xMax); pY.insert(yMax);
		
		distX[xMax]++;
		distY[yMax]++;
		long long sent, coor;
		while(n--){
			scanf("%lld%lld", &sent, &coor);
			if(!sent){
				//Vertical
				it = pX.find(coor);
				if(it == pX.end()){
					//Sin rep
					pX.insert(coor);
					it = pX.find(coor);
					itR = ++it;
					it--;
					itL = --it;
					it++;
					distX[*itR - *itL]--;
					if(distX[*itR - *itL] == 0)
						distX.erase(*itR - *itL);
					distX[*it - *itL]++;
					distX[*itR - *it]++;
				}
				
			}else{
				//Horizontal
				it = pY.find(coor);
				if(it == pY.end()){
					//Sin rep
					pY.insert(coor);
					it = pY.find(coor);
					itR = ++it;
					it--;
					itL = --it;
					it++;
					distY[*itR - *itL]--;
					if(distY[*itR - *itL] == 0)
						distY.erase(*itR - *itL);
					
					distY[*it - *itL]++;
					distY[*itR - *it]++;
				}
			}
			
			it2 = distX.end();
			it2--;
			x = (*it2).first;
			
			it2 = distY.end();
			it2--;
			y = (*it2).first;
			res = x * y;
			printf("%lld\n",res);	
		}
	}
    return 0;
}