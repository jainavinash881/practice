#include <bits/stdc++.h>

using namespace std;


void InvertedFloydTriangle(int sizeoftriangle)  //Function for printing inverted Triangle
{
    int i,j;
    int val = sizeoftriangle * (sizeoftriangle + 1) / 2;   //calculate the value to be print
    for(i=sizeoftriangle; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            cout<<val<<" ";
            val--;
        }
        cout<< endl;
    }

}


int main()
{   int sizeoftriangle;
    cout<<"enter size"<<endl;
    cin>>sizeoftriangle; //Enter Size of triangle
    InvertedFloydTriangle(sizeoftriangle);  //Function calling to print inverted triangle.
    return 0;
}
