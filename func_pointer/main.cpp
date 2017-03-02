#include <iostream>

void PRINT(const int& a, const int& b)
{
	std::cout << a << " " << b << std::endl;
}

void main()
{
	int a = 1;
	int b = 4;

	void(*func_ptr)(const int& a, const int& b);
	// (void)(*func_ptr)(const int& a, const int& b); // compile error

	func_ptr = &PRINT;

	func_ptr(a, b);


}