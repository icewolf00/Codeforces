#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 1;
    int maxcount = 1;
    cin >> n;
    int profits[n];
    cin >> profits[0];
    for (int i = 1; i < n; i++)
    {
        cin >> profits[i];
        if (profits[i] >= profits[i - 1])
        {
            count++;
        }
        else{
            maxcount = max(maxcount, count);
            count = 1;
        }
    }
    maxcount = max(maxcount, count);
    cout << maxcount << endl;
    return 0;
}