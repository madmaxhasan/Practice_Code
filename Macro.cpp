/* ====================================================== */
#include <bits/stdc++.h>
#define FileIn(file) freopen(file".txt", "r", stdin)
#define FileOut(file) freopen(file".txt", "w", stdout)
#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define REP(i, n) for(int i=0; i<n; i++)
#define Fill(arr, val) memset(arr, val, sizeof arr)
#define All(arr) arr.begin(), arr.end()
#define PI 3.1415926535897932385
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mkp make_pair
#define MAX 505
#define INF 500000000
#define debug cout << "DEBUG" << endl;
using namespace std;
typedef   pair <int, int>  ii;
typedef   pair <char, int> ci;
typedef   pair <int, char> ic;
typedef vector <ii>       vii;
typedef vector <ci>       vci;
typedef vector <ic>       vic;
typedef vector <int>       vi;
typedef vector <bool>      vb;
/* ====================================================== */
bool sortbyFrst(const ii &a, const ii &b){return (a.first > b.first);}
bool sortbyScnd(const ii &a, const ii &b){return (a.second < b.second);}
bool perfectDec(const ic &a, const ic &b){return ((a.first != b.first) ? a.first > b.first : a.second < b.second);}
int drX[] = {1, 1, 0, -1, -1, -1, 0, 1};
int drY[] = {0, 1, 1, 1, 0, -1, -1, -1};
/* ====================================================== */

int main()
{
#ifndef ONLINE_JUDGE
	FileIn("in");
	FileOut("out");
#endif //ONLINE_JUDGE


	return 0;
}