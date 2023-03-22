#include <iostream>
using namespace std;


int main()
{
	int a;
	cin >> a;
	__asm
	{
		mov eax, a;
		push eax;
		call fact;		
		jmp exit1;

	fact:
		mov eax, [esp + 4];
		cmp eax, 1;
		jne calc;
		ret;

	calc:
		dec eax;
		push eax
		call fact;
		add esp, 4			
		mul[esp + 4];
		ret;

	exit1:
		add esp, 4;
		mov a, eax;
	}

	cout << a << std::endl;

}