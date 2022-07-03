#include <fstream>
#include <iostream>
using namespace std;

int main(){
	int x;
	ifstream in_stream;
	ofstream out_stream;
	
	in_stream.open("myfile.txt");
	in_stream >> x;
	out_stream.open("myfile.txt");
	
	cout << "The number read is: " << x << endl;
	return 0;
}
