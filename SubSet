#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {5,8,13,27,14}, counter = 0;
    for(int i=0; i<(1 << 5); i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        counter++;
        cout << endl;
    }
    cout << counter << endl;
    return 0;
}
