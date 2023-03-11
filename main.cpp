/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string name;
    string month;
    int day,year,n;
    string email;
    cin>>n;
    for(int i=0;i<=n;i++)
    {cout<<"enter name"<<endl;
        cin>>name;
    cout<<"enter dob"<<endl;
    cin>>month>>day>>year;
    cout<<"enter email"<<endl;
    cin>>email;
        cout<<"Name :"<<endl;
    cout<<"DOB :"<<month<<" "<<day;
    cout<<" ,"<<year<<endl;
    cout<<"Email :"<<email<<endl;}

    return 0;
}

