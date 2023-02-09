#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string b;
        cin >> b;
        int k = 0;
        for (int i = 0; i < a; i++)
        {
            if (b[i] == '1')
                k++;
        }
        if (k > 3)
            cout << "NO" << endl;
        else if (k == 3)
            cout << "YES" << endl;
        else if (k == 2)
            cout << "YES" << endl;
        else
        {
            if (b == "1" || b == "10")
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
