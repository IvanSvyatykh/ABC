#include <iostream>
using namespace std;



int main()
{
	unsigned char numberOne, numberTwo, y;
	int one, two;
	char x;
	bool _signed, _unsigned;
	cout << "Add Two number" << endl;
	cin >> one;
	cout << endl;
	cin >> two;
	numberOne = one;
	numberTwo = two;
	_asm
	{
		mov al, numberOne
		mov bl, numberTwo
		mov _signed, 0
		mov _unsigned, 0
		add al, bl
		jno sign_norm;
		mov _signed, 1
			sign_norm:
		jnc unsign_norm;
		mov _unsigned, 1
			unsign_norm:
		mov x, al
			mov y, al
	}
	cout << "numberOne + numberTwo = " << (int)y << "(unsigned)" << endl;
	cout << "numberOne + numberTwo = " << (int)x << "(signed)" << endl;


	if (_signed) cout << "overflow (signed)" << endl;
	else cout << "no overflow (signed)" << endl;
	if (_unsigned) cout << "overflow (unsigned)" << endl;
	else cout << "no overflow (unsigned)" << endl;

}