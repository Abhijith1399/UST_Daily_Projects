#include<iostream>
using namespace std;

int main()
{
    char a[10];
    char b[10];
    int c = 0;  // Index for b

    cout << "Enter the string: ";
    cin.getline(a, 10);

    int count = 0;
    while (a[count] != '\0') {
        count++;
    }

    for (int i = 0; i < count; i++) {
        bool flag = false;

        // Check if a[i] is already in b
        for (int j = 0; j < c; j++) {
            if (a[i] == b[j]) {
                flag = true;
                break;
            }
        }

        // If not found, copy to b
        if (!flag) {
            b[c] = a[i];
            c++;
        }
    }

    b[c] = '\0';  // Null-terminate string
    cout << "String without duplicates: " << b << endl;

    return 0;
}


/*for (int i = count;i >= 0;i--)
	{
		cout << a[i]<<endl;
	}

	for (int i = 0;i < count;i++)
	{
		cout << a[i]<<endl;
	}

	for (int i = 0;i < count;i++)
	{
		b[i] = a[count-i-1];


	}
	b[count] = '\0';
	cout << b;*/