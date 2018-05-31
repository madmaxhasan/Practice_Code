/* ====================================================== */
#include <bits/stdc++.h>
#define FileIn(file) freopen(file".txt", "rt", stdin)
#define FileOut(file) freopen(file".txt", "wt", stdout)
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

int r, c, lenRow, lenCol;
char Grid[200][200];

void hyphen(int s, int c)
{
    for(int i=1; i<=s; i++)
        Grid[r][c-i] = '-';
}

void one(int s)
{
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
}

void two(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++,++r)
        Grid[r][c-s-1] = '|';
    hyphen(s, c);
}

void three(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    hyphen(s, c);
}

void four(int s)
{
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
}

void five(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    hyphen(s, c);
}

void six(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    hyphen(s, c);
}

void seven(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
}

void eight(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    hyphen(s, c);
}

void nine(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c] = '|';
    hyphen(s, c);
}

void zero(int s)
{
    hyphen(s, c);
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    ++r;
    for(int i=0; i<s; i++, ++r)
        Grid[r][c-s-1] = Grid[r][c] = '|';
    hyphen(s, c);
}

void printLCD(int x, int s)
{
    switch(x)
    {
    case 1:
        one(s);
        break;
    case 2:
        two(s);
        break;
    case 3:
        three(s);
        break;
    case 4:
        four(s);
        break;
    case 5:
        five(s);
        break;
    case 6:
        six(s);
        break;
    case 7:
        seven(s);
        break;
    case 8:
        eight(s);
        break;
    case 9:
        nine(s);
        break;
    default:
        zero(s);
    }
}

void printGrid()
{
    for(int i=0; i<lenRow; i++)
    {
        for(int j=0; j<lenCol; j++)
        {
            printf("%c",Grid[i][j]);
        }
        printf("\n");
    }
}

int main()
{
#ifndef ONLINE_JUDGE
	FileIn("in");
	FileOut("out");
#endif //ONLINE_JUDGE

    int s, n;
    while(scanf("%d %d",&s,&n), s+n)
    {
        lenRow = 2 * s + 3, lenCol = (3 + s), r = 0, c = s+1;
        memset(Grid, '\0', sizeof Grid);
        int arr[10], k = 0;
        while(n)
        {
            arr[k++] = n%10;
            n /= 10;
        }
        reverse(arr, arr+k);
        lenCol *= k;
        for(int i=0; i<k; i++)
        {
            printLCD(arr[i], s);
            c += (s+3), r = 0;
        }
        printGrid();
    }
    return 0;
}
