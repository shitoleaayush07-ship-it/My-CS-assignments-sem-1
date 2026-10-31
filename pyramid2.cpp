#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;

    while (i <= n) {
        int j = 1;

        // Print leading spaces
        while (j <= n - i) {
            cout << " ";
            j++;
        }

        // Print stars
        j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}