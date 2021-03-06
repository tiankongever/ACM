/** Template for TC ., Last Update: Dec. 24th 2012 **/ //{

#include <functional>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <list>
#include <set>
#include <map>

using namespace std;

#define REP(I, N) for (int I=0;I<int(N);++I)
#define FOR(I, A, B) for (int I=int(A);I<int(B);++I)
#define DWN(I, B, A) for (int I=int(B-1);I>=int(A);--I)
#define ECH(it, A) for (typeof(A.begin()) it=A.begin(); it != A.end(); ++it)

#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define INS(A, P, B) A.insert(A.begin() + P, B)
#define ERS(A, P) A.erase(A.begin() + P)
#define BSC(A, x) (lower_bound(ALL(A), x) - A.begin())
#define CTN(T, x) (T.find(x) != T.end())
#define SZ(A) int(A.size())
#define PB push_back
#define MP(A, B) make_pair(A, B)

#define fi first
#define se second

typedef long long LL;
typedef double DB;

template<class T> inline void RST(T &A){memset(A, 0, sizeof(A));}
template<class T> inline void FLC(T &A, int x){memset(A, x, sizeof(A));}
template<class T> inline void CLR(T &A){A.clear();}

template<class T> inline T& SRT(T &A){sort(ALL(A)); return A;}
template<class T, class C> inline T& SRT(T &A, C B){sort(ALL(A), B); return A;}
template<class T> inline T& UNQ(T &A){A.resize(unique(ALL(SRT(A)))-A.begin());return A;}

template<class T> inline void checkMin(T &a, T b){if (b<a) a=b;}
template<class T> inline void checkMax(T &a, T b){if (b>a) a=b;}

const int MOD = int(1e9 + 7);
const int INF = 0x7fffffff;

//}/* .................................................................................................................................. */

const int N = 50;

class MonstersValley {
public:
	int minimumPrice(vector<long long> dread, vector <int> price) {	
		
		int res = 0;

		
		return res;
	}
};


// BEGIN CUT HERE
namespace moj_harness {
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				cerr << "Illegal input! Test case " << casenum << " does not exist." << endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			cerr << "No test cases run." << endl;
		} else if (correct < total) {
			cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << endl;
		} else {
			cerr << "All " << total << " tests passed!" << endl;
		}
	}
	
	int verify_case(int casenum, const int &expected, const int &received, clock_t elapsed) { 
		cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		cerr << verdict;
		if (!info.empty()) {
			cerr << " (";
			for (int i=0; i<(int)info.size(); ++i) {
				if (i > 0) cerr << ", ";
				cerr << info[i];
			}
			cerr << ")";
		}
		cerr << endl;
		
		if (verdict == "FAILED") {
			cerr << "    Expected: " << expected << endl; 
			cerr << "    Received: " << received << endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum) {
		switch (casenum) {
		case 0: {
			long long dread[]         = {8, 5, 10};
			int price[]               = {1, 1, 2};
			int expected__            = 2;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			long long dread[]         = {1, 2, 4, 1000000000};
			int price[]               = {1, 1, 1, 2};
			int expected__            = 5;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			long long dread[]         = {200, 107, 105, 206, 307, 400};
			int price[]               = {1, 2, 1, 1, 1, 2};
			int expected__            = 2;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			long long dread[]         = {5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333};
			int price[]               = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1};
			int expected__            = 5;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			long long dread[]         = ;
			int price[]               = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			long long dread[]         = ;
			int price[]               = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			long long dread[]         = ;
			int price[]               = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = MonstersValley().minimumPrice(vector<long long>(dread, dread + (sizeof dread / sizeof dread[0])), vector <int>(price, price + (sizeof price / sizeof price[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(atoi(argv[i]));
	}
}
// END CUT HERE
