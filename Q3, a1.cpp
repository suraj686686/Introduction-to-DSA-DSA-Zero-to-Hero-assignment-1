#include <bits/stdc++.h>
using namespace std;
 
// Function to print hollow rectangle
void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||
                j == 1 || j == m)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
 
}

int main()
{
    int rows = 4, columns = 5;
    print_rectangle(rows, columns);
    return 0;
}
 