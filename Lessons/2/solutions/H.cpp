#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  map <int, string> M;
  int code, price;
  string prod;
  for (int i = 1; i <= n; i++) {
    cin >> code;
    if (code != 3){
      cin >> prod >> price;
      if (code == 1) {
        M[price] = prod;
      } else {
        auto it = find_if(M.begin(), M.end(), [&](const auto& m) {return m.second == prod; });
        M.erase(it);
        M[price] = prod;
      }
    } else {
      cin >> prod;
      cout << (*M.begin()).second << " " << i << "\n";
      M.erase(M.begin());
    }
  }
  return 0;
}
