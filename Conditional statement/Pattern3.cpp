
#include <iostream>
using namespace std;

void pattern3(int n)
{
    for (int i = n; i > 0; i--) {

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
    pattern3(n);
    return 0;
}
