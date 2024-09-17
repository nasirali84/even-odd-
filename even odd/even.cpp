#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a posetive number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " Is an even number";
    }
    else
    {
        cout << num << " Is an odd number";
    }
    return 0;
}