#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int aa[1000] = {[0 ... 999] = 0};
        int counter = 0;
        for (int i = a; i <= b; i++)
        {
            aa[i] = 1;
            counter++;
        }
        for (int j = c; j <= d; j++)
        {

            if (aa[j] == 1)
            {
                continue;
            }
            counter++;
            aa[j] = 1;
        }
        cout << counter << endl;
    }
    return 0;
}