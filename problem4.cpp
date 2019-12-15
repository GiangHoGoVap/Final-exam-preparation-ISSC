#include <iostream>
using namespace std;
void maxmin(double*a, double&min, double&max, int size){
	if (size <=0 )
	return;
	min = a[0];
	max = a[0];
	int sum=0;
	for (int i=1; i<size; i++){
		sum += a[i];
		if (min > a[i]) min=a[i];
		if (max < a[i]) max=a[i];
	}
}
int main(){
	double a[]={11.1,5.3,7.3,-1.5,-6.5};
	double min=0,max=0;
	maxmin(a,min,max,sizeof(a)/sizeof(a[0]));
	cout << min << ", " << max << endl;
	return 0;
}
