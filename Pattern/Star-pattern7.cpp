#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        // for star
        for (int k = 0; k < i * 2 + 1; k++)
        {
            cout << '*';
        }
        // for space
        for (int l = 0; l < n - i - 1; l++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern2(n);
}