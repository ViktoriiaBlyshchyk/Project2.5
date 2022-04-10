#include "Lorry.h"
#include <iostream>

using namespace std;

int main()
{
    Lorry l1;
    Lorry l2("Ford", 500, 6, 2000);
    cout << l2 << endl;

    l1 = ++l2;
    cout << l1 << endl;
    cout << l2 << endl;

    l1 = l2++;
    cout << l1 << endl;
    cout << l2 << endl;
    
    Lorry l3;
    cin >> l3;
    cout << l3 << endl;
    return 0;
}
