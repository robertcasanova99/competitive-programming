//============================================================================
// Author       : LAM PHAN VIET
// Online Judge : LightOJ
// Problem Name : 1010 - Knights in Chessboard 
// Time Limit   : 1.000s
// Description  : chess - knight
//============================================================================
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define inpFile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define ff first
#define ss second
#define bit(n) (1<<(n))
#define Last(i) ( i & -i )
#define INF 500000000
#define maxN 100010
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int solve(int n, int m) {
    if (n > m) swap(n, m);
    if (n == 1) return m;
    if (n == 2)
        return (m / 4) * 4 + min((m % 4), 2) * 2;
    return (n * m + 1) >> 1;
}

int main() {
    #ifndef ONLINE_JUDGE
        inpFile("test.inp"); outFile("test.out");
    #endif
    int caseNo, cases = 0, n, m;
    scanf("%d", &caseNo);
    while (caseNo--) {
        scanf("%d %d", &n, &m);
        printf("Case %d: %d\n", ++cases, solve(n, m));
    }
    return 0;
}

// lamphanviet@gmail.com - 2011
