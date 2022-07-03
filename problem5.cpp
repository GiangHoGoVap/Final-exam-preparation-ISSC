#include <iostream>
using namespace std;

void rotate1(int *a, int *b, int *c){
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}

void rotate2(int &a, int &b, int &c){
	int temp = a;
	a = c;
	c = b;
	b = temp;
}

int main(){
	int a, b, c;
	cout << "Enter three integers: " << endl;
	cin >> a >> b >> c;
	rotate1(&a, &b, &c); 
	// rotate2(a, b, c);
	cout << a << " " << b << " " << c << endl;
	return 0;
}
