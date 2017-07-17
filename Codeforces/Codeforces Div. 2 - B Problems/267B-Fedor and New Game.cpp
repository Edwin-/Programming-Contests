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

bool compare(string a , string b , int k2){
	int c = 0 ;
	int a2 =a.size();
	int b2 =b.size();
	int aux = abs(a2 - b2);
	if( a2 == b2 ){
		for (int i = 0; i < a.size(); i++){
	    	if(a[i] != b[i]){
	    		c++;
	    	}
	    }
	}else if( aux <= k2){
		return true;
	}	
    if(c <= k2) return true;
	//printf("%s %s\n", a.c_str(), b.c_str());
return false;
}

int main(){

	int n , m, k;	//soldiers / players (m+1) / tupe of soldier
    int kt[1010];
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 0 ; i < m+1 ; i++){
    	cin >> kt[i];
    }
    bitset<20> fedor_bin(kt[m]);
    string mystring =fedor_bin.to_string<char,string::traits_type,string::allocator_type>();
	int c = 0LL;
	for(int i = 0 ; i < m ; i++){
		bitset<20> player(kt[i]);
		string mystring2 = player.to_string<char,string::traits_type,string::allocator_type>();
		if(compare(mystring,mystring2,k)){
			c++;
		}
	}
    cout << c <<"\n";  
  return 0;
}

