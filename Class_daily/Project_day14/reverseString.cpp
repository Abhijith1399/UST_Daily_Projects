#include<iostream>
using namespace std;


int lenstr(char ch[]);
void rev(char ch[], int count);



int lenstr(char ch[]) {
    int count = 0;
    while (ch[count] != '\0') {
        count++;
    }
    return count;
}

void rev(char ch[], int count) {
    for (int i = count - 1; i >= 0; i--) {
        cout << ch[i];
    }
    cout << endl;
}

int main() {
    char ch[102];
    cout << "Enter the string: ";
    cin.getline(ch, 102);

    int count = lenstr(ch);
    cout << "Reversed string: ";
    rev(ch, count);



    return 0;
}
