#include<iostream>
using namespace std;

int LinearSearch(int*m,int n,int item){
    for(int i=0;i<10;i++){
        if(m[i]==item)

return i;
}
return -1;
}

int main(){
 int a[10];
 int item;
 cout<<"input array :"<<endl;
 for(int i=0;i,10;i++){
    cin>>a[i];
 }

 cout<<"input item:";
 cin>>item;
 int i=LinearSearch(a,10,item);
 if(i==-1)
 cout<<"item not found";
 else cout<<a[i]<<" found in "<<i<<" location"<<endl;
 return 0;
}

