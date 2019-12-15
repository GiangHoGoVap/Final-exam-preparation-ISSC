#include <iostream> 
using namespace std; 
  
// Return true if s is a number else false 
int digits(string s) 
{ 
    for (int i = 0; i < s.length(); i++){ //s.length() la ham tính do dai cua string
        if (isdigit(s[i]) == 0) return 0; //isdigit() la ham kiem tra ki tu co phai so thap phan hay khong
	} 
    return 1; 
} 
  
// Driver code 
int main() 
{ 
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
  
    // Function returns 1 if all elements 
    // are in range '0-9' 
    if (digits(str)) 
        cout << "Integer"; 
  
    // Function returns 0 if the input is 
    // not an integer 
    else
        cout << "String"; 
} 
