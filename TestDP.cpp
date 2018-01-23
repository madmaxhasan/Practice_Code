#include <bits/stdc++.h>
#define MAX 100
#define VISITED 1
#define UNVISITED 0

using namespace std;

int X[] = {0, -1, 0, 1};    // L, U, R, D
int Y[] = {-1, 0, 1, 0};    // L, U, R, D
bool check[MAX][MAX];
int in[MAX][MAX];
int table[MAX][MAX];
int N, M;

void prinTGrid()
{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            printf("%2d ",table[i][j]);
        }
        puts("");
    }
    puts("");
}

void prinTVISIT()
{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            cout << check[i][j] << " ";
        }
        puts("");
    }
    puts("");
}

bool isOk(int x, int y)
{
    return (x > 0 && x <= N && y > 0 && y <= M);
}

bool isNoMove(int x, int y)
{
    for(int i=0; i<4; i++)
    {
        int moveX = x + X[i];
        int moveY = y + Y[i];
        if(in[x][y] > in[moveX][moveY] && isOk(moveX, moveY))return false;
    }
    return true;
}

int DP(int x, int y)
{
    if(isNoMove(x, y))
    {
        check[x][y] = VISITED;
        return table[x][y] = 1;
    }
    if(table[x][y] > 0)return table[x][y];
    for(int i=0; i<4; i++)
    {
        int moveX = x + X[i];
        int moveY = y + Y[i];
        if(isOk(moveX, moveY) && in[x][y] > in[moveX][moveY])
        {
            check[x][y] = VISITED;
            int val = DP(moveX, moveY);
            table[x][y] = max(val+1, table[x][y]);
        }
    }
    return table[x][y];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE

    cin >> N >> M;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            int x;
            cin >> in[i][j];
            table[i][j] = UNVISITED;
            check[i][j] = UNVISITED;
        }
    }
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            if(check[i][j] == UNVISITED)
            {
                int ans = DP(i, j);
                table[i][j] = max(ans, table[i][j]);
            }
        }
    }
    prinTGrid();
    prinTVISIT();
    return 0;
}
