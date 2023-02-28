#include <iostream>
using namespace std;

int x;

int main()
{
    int a=2, b=2, c=3, d=2, e=3, x;
    __asm
    {
        mov eax,a
        add eax,b
        mul c
        sub eax,d
        cdq
        div e
        mov x ,eax
        
    }
    
    cout << x;
    return 0;
}