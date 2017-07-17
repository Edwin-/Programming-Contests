/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Codeforces
 * Problem: B. Fedor and New Game || Codeforces Round #267 (Div. 2)
 *****************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <queue>
#include <climits>

using namespace std;

#define ALL(x)      x.begin(),x.end()
#define SORT(c)     sort(ALL(c))
#define CL(a,b)     memset(a,b,sizeof(a))

#define foreach(c,it) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
#define FX(x) fixed << setprecision(x)
#define INF (1<<30)

typedef long long   LL;
typedef unsigned long long uLL;

const double EPS = 1e-10; // 1e-9;
const double PI  = acos(-1.0);

int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
int main(){

	  int n , m, k;	//soldiers / players (m+1) / tupe of soldier
    int kt[1010];
    scanf("%d%d%d",&n,&m,&k);

    for(int i = 0 ; i < m+1 ; i++){
    	cin >> kt[i];
    }
   	int c2 = 0;
   	for(int i = 0 ; i < m ; i++){

   		int aux = kt[i] ^ kt[m]; // XOR
   		int c = 0; int div;
   		while( aux > 0){
   			if(aux%2 == 1){
   				c++;	
   			}
   			aux = aux/2;
   		}
   		if(c <= k) c2++;
   	}
    cout << c2 <<"\n";
  
  return 0;
}







