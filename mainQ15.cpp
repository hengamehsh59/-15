#include<iostream>
using namespace std;
int main()
{
    int n,tempNumber;
    cin>>n;
    cin>>tempNumber;
    int max=tempNumber,min=tempNumber;
    for(int i=1;i<n;i++){
        cin>>tempNumber;
        if(max<tempNumber){
            max=tempNumber;
                min=tempNumber;
            }
            cout<<"max:"<<max;
            cout<<"min:"<<min;
            return 0;
        }
}