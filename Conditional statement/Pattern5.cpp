
#include <iostream>
using namespace std;

void pattern5(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n) {

        // for spacing
        while (k <= n - i - 2) {
            cout << " ";
            k++;
        }
        k = 0;

        // For Pattern printing
        while (j <= i) {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}

int main()
{
    int n = 5;

    pattern5(n);
    return 0;
}
