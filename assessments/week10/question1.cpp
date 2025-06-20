#include <iostream>
#include <cstring>
using namespace std;

char FirstUniqueChar(char* str) {
    
    int arr[26] = { 0 };

    for (int i = 0; str[i] != '\0'; i++) {
        arr[str[i]]++;
    }

  
    for (int i = 0; str[i] != '\0'; i++) {
        if (arr[str[i]] == 1) {
            return str[i];  
        }
    }

    
    return ' ';
}

int main() {
    char str1[] = "appliedmaterials";
    cout << "First non-repeating character: " << FirstUniqueChar(str1) << endl;

    char str2[] = "abacbc";
    cout << "First non-repeating character: " << FirstUniqueChar(str2) << endl;  
    return 0;
}
