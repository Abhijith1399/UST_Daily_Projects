#include<iostream>
#include<cmath>
#define max 20
using namespace std;
void decimalbinary(int,int);
int octalDecimal(int,int);
void Decimaloctal(int,int);
int binarydecimal(int,int);

void decimalbinary(int binnum ,int basebin)
{
    int temp = binnum;
    float arr[max];
    int i = 0, j;
    while (temp > 0) {
        arr[i] = temp % basebin;
        temp = temp / basebin;
        i++;
    }

    for (j = i - 1; j >= 0; j--)

    cout << "Decimal to binary Conversion:" << arr[j];
    cout << endl;
}




int binarydecimal(int binnum,int basedec )
{
    int count = 0;
    int temp = binnum;
    int digit;
    int bin = 0;


    while (temp > 0) {
        digit = temp % basedec;
        temp=temp / basedec;
        bin += digit * pow(2, count);
        count++;
    }

    return bin;

}




void Decimaloctal(int num ,int baseoct) 
{
    int temp = num;
     float arr[max];
    int i = 0, j;
    while (temp > 0) {
        arr[i] = temp % baseoct;
        temp = temp / baseoct;
        i++;
    }
    
    for (j = i - 1; j >= 0; j--) 
       
    cout << "Decimal to Octal Conversion:" << arr[j];
    cout << endl;
    
}

int octalDecimal(int num ,int basedec) {
    int count = 0;
    int temp = num;
    int digit;
    int sum = 0;
 while (temp) {
        digit = temp % basedec;  
        temp /= basedec;         
        sum += digit * pow(8, count);
        count++;         
    }

    return sum;  
}

int main() {
    int num;
    int binnum;
    int basebin=2, basedec=10,baseoct=8;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Octal to Decimal Conversion: " << octalDecimal(num,basedec) << endl;

    Decimaloctal(num,baseoct);

    cout << "enter the binary digit:";
    cin >> binnum;

    cout << "binary to Decimal Conversion: " << binarydecimal(binnum,basedec) << endl;
    decimalbinary(binnum,basebin);

    return 0;
}
