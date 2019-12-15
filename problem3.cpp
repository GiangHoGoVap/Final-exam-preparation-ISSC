#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	double sum,result;
	cout << "Enter three integers: ";
	cin >> a >> b >> c;
	sum = a+b+c;
	result=sum/3.0;
	cout << a << " + " << b << " + " << c << " = " << sum << "/3" << " = " << result;
	return 0;
}
