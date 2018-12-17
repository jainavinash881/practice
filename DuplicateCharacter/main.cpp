#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char str[50];//string defined
    cout << "Enter a string" << endl;//input string
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        for(int j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            cout << "Character " << str[i] << " is repeated" << endl;//output for repeated character
        }
    }


    return 0;
}
