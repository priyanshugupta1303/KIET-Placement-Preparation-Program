#include<iostream>
using namespace std;
int main(){
    cout<<"Pascal's Triangle"<<endl;
    cout<<"Enter the size"<<endl;
    int n;
    cin>>n;
    for(int l=1; l<=n; l++)
    {
        int cnt=1;
        for(int i=1;i<=l;i++)
        {
            cout<<cnt<<" ";
            cnt=cnt*(l-i)/i;
        }
        cout<<"\n";
    }
    return 0;
}
