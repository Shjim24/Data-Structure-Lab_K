#include <iostream>
using namespace std;

int main()
{ int s1, s2;
    cout<<"Enter the size of 1st array: ";
    cin>>s1;
    cout<<"Enter the size of 2nd array: ";
    cin>>s2;
    int Array1[s1], Array2[s2], Array3[s1+s2];
    cout<<"\nPlease enter the element of 1st array: ";
    for(int i=0; i<s1; i++)
    {
    cin >> Array1[i];
    }
    cout<<"\nPlease enter the element of second array: ";
    for(int i=0; i<s2; i++)
    {
    cin >> Array2[i];
    }
    int k = 0;
    for(int i = 0 ; i < s1+s2; i++)
    {
    if(i < s1)
    {
    Array3[i] = Array1[i];
    }
    else
    {
    Array3[i] = Array2[k];k++;
    }
    }
    cout << "\nThe Array after Adding Both is: ";
    for (int i = 0; i < s1+s2; i++)
    {
    cout << Array3[i] <<" ";
    }
    cout << "\n\nThe Added Array in reverse order is: ";
    for (int i = s1+s2-1; i >= 0; i--)
    {
    cout << Array3[i] <<" ";
    }
    cout<<endl<<endl;
    return 0;
}



