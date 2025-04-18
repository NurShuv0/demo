#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    int x=strlen(str);

    cout << strlen(str);
    return 0;
}
