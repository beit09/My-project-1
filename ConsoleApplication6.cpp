#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	int sum = a + b;
	int dif = a - b;
	int pro = a * b;
	int quo = a / b;
	cout << sum << " " << dif << " " << pro << " " << quo;
	return 0;
}