
#include <iostream>
using namespace std;
void pattern4(int n)
{
    // number of spaces
    int k = 2 * n - 2;

    for (int i = n; i > 0; i--) {

        for (int j = 0; j < n - i; j++)
            cout << "  ";

        k = k - 2;

        for (int j = 0; j < i; j++) {
            // Printing stars
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    pattern4(n);
    return 0;
}
