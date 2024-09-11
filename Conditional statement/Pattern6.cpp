
#include <iostream>
using namespace std;

void pattern6(int n)
{

    for (int i = 0; i < n; i++) {

        // leading space counter
        int space = i;

        for (int j = 0; j < 2 * n - i - 1; j++) {

            if (space) {
                cout << "  ";
                space--;
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// driver code
int main()
{
    pattern6(5);

    return 0;
}
