#include <iostream> 
using namespace std;

int equals(int arr1[], int arr2[] , int n, int m){
	if (n != m) 
        return false; 
  
    // Sort both arrays 
    sort(arr1, arr1 + n); 
    sort(arr2, arr2 + m); 
  
    // Linearly compare elements 
    for (int i = 0; i < n; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
  
    // If all elements were same. 
    return true; 
} 

int main(){
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {2,3,4,5,1};
	int n = sizeof(arr1)/sizeof(int);
	int m = sizeof(arr2)/sizeof(int);
	cout << "The size of two arrays: ";
	cin >> n >> m;
	
	if (n != m) return false;
	
	for (int i = 0; i < n; i++){
		cout << "Enter the first array element [" << i << "]: ";
		cin >> arr1[i];
	}
	
	for (int i = 0; i < m; i++){
		cout << "Enter the second array element [" << i << "]: ";
		cin >> arr2[i];
	}
	
	if (equals(arr1, arr2, n, m)) 
        cout << "Same" << endl; 
    else
        cout << "Different" << endl; 
		
    return 0; 
} 



