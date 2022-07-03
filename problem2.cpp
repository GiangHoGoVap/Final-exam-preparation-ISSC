#include <iostream>
using namespace std;

double sum2(unsigned int N)
{
	float sum =0;
	for (double i = 1; i <= N; i++){
		sum = sum + 1/i;
	}
	return sum;
}

void sum1(double &sum, unsigned int N){
	for (double i = 1; i <= N; i++){
		sum = sum + 1/i;
	}
	cout << sum << endl;
}

int main(){
	int a;
	double sum = 0;	
	cout << "Enter a: ";
	cin >> a;
	sum1(sum, a);
	cout << sum2(a) << endl;
	return 0;
}
