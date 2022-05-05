

// Given the string "A string." Print on one line the letter on the index 0, the pointer position and the letter t.
// Update the pointer to pointer+2. Then, in another line print the pointer and the letters r and g of the string
//(using the pointer).

#include <iostream>
using namespace std;

int main(void)
{
    char str[] = "A string.";
    char *pc = str;

    cout << str[0] << ' ' << *pc << ' ' << pc[3] << "\n";
    pc += 2;
    cout << *pc << ' ' << pc[2] << ' ' << pc[5];

    return 0;
}
