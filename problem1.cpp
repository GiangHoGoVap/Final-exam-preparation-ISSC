#include <iostream>
using namespace std;
void printPattern(int n) 
{ 
    // Variable initialization 
    int line_no = 1; // Line count 
  
    // Loop to print desired pattern 
    int current_star = 0; 
    for (int line_no = 1; line_no <= n; ) 
    { 
        // If current star count is less than current line number 
        if (current_star < line_no) 
        { 
           cout << "* "; 
           current_star++; 
           continue; 
        } 
  
        // Else print a new line 
        if (current_star == line_no) 
        { 
           cout << "\n"; 
           line_no++; 
           current_star = 0; 
        } 
    } 
} 
int main(){
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	
	// Using 2 for loops to produce the asterisks
	// Remember to delete the void in order to run 2 for loops
	/*
	 for (int i=1;i<=row;i++){
		for (int j=1; j<=i;j++){
			cout << "*" ;
		}
			cout << "\n";
	} */
	
	
	printPattern(n);
	return 0;
}
