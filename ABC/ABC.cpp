#include <iostream>
using namespace std;
void ShowByte(unsigned char* data )
{
	for (int i = 0; i < 8; i++)
	{
		if ((*data) & (0x80 >> i)) printf("1");
		else  printf("0");
	}
	cout << " ";
}

void ShowFull(unsigned char* number, int NumOfBytes)
{

	cout << "Big Endian :";
	for (int i = NumOfBytes - 1; i >= 0; i--)
	{
		ShowByte((number)+i);

	}
	cout << endl;
	cout << "Little Endian :";
	for (int i = 0; i < NumOfBytes; i++)
	{
		ShowByte((number)+i);

	}
}

int main()
{
    int num;
    cin >> num;

    int numInt = num;
    float numFloat = num;
    double numDouble = num;
		
	cout << "int" << endl;
	ShowFull((unsigned char*)&numInt , 4);
	cout << endl;
	
	cout << "float" << endl;
	ShowFull((unsigned char*)&numFloat, 4);
	cout << endl;

	cout << "double" << endl;
	ShowFull((unsigned char*)&numDouble, 8);
}