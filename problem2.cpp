#include <iostream>
using namespace std;
/* double sum2(unsigned int N)
{
	float sum =0;
	for (double i=1;i<=N;i++){
		sum = sum + 1/i;
	}
	cout << sum;
	return sum;
}*/
void sum1( double &sum, unsigned int N){
	
	for (double i=1; i<=N;i++){
		sum = sum + 1/i;
	}
}
int main(){
	int a;
	
	cout << "Enter a: ";
	cin >> a;
	sum1(a);
	return 0;
}
