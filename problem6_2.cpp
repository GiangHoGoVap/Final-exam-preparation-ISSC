#include <iostream>
#include <string.h>
using namespace std;

int find_char(char *string, char *pat){
	if (*string == '\0' && *pat != '\0') 
        return false; 
  
    // Else If last character of pattern reaches 
    if (*pat == '\0') 
        return true; 
  
    if (*string == *pat) 
        return find_char(string + 1, pat + 1); 
  
    return false; 
}

bool contains(char *string, char *pat) 
{ 
    // If last character of text reaches 
    if (*string == '\0') 
        return false; 
  
    // If current characters of pat and text match 
    if (*string == *pat) 
    {
        if (find_char(string, pat)) 
            return 1; 
        else
            return contains(string + 1, pat); 
    }
  
    // If current characters of pat and tex don't match 
    return contains(string + 1, pat); 
} 

int main()
{
    cout << contains("nguyenminhtam", "tam") << endl;
    return 0;
}
