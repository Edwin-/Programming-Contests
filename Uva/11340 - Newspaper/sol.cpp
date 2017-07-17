/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Uva - Online Judge
 * Problem: 11340 - Newspaper	
 * Link :   https://uva.onlinejudge.org/external/113/11340.pdf
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
		
		 vector <string> text;
		 int N, k ,M;
		 scanf("%d",&N);
		 char letter; int value; 
		 string line;
		 map<char , int> concurrences;
		 vector<pair<char, int> > table;
		 double sum ;
		 for( int cases = 0 ; cases < N ; cases++){
		 	sum = 0; 
		 	scanf("%d" , &k);
		 	for( int i = 0 ; i < k ; i++){
		 		cin >> letter >>value;
		 		table.push_back(make_pair(letter,value));
		 	}
		 	scanf("%d",&M);
		 	getchar();
		 	for(int i = 0; i < M ; i++){
		 		getline(cin,line);
				text.push_back(line);
		 	}	
		 	for( int i = 0; i < text.size(); i++){
		 		for( int j = 0 ; j < text[i].size(); j++){
		 			concurrences[text[i][j]]++;
		 		}
		 	} 	
		 	for( int i = 0; i < table.size(); i++){
		 		foreach(concurrences, it){
		 			if( table[i].first == it->first){
		 				sum = sum + (it->second * table[i].second);
		 			}
		 		}
		 	}	
		 	 sum = sum / 100.0;
		     printf("%0.2lf$\n", sum);
		     table.clear(); concurrences.clear(); text.clear();
		 }
        return 0;
}