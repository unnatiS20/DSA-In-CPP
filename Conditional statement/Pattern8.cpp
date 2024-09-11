
#include <iostream>
using namespace std;
void pattern8(int n)
{
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 1; i++) {

        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= n - i; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main()
{

    int n = 5;
    
    pattern8(n);
    return 0;
}
