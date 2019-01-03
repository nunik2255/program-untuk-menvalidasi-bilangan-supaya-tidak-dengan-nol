#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,hasil;
    cout<<"Program pembagi tidak dengan nol"<<endl;
    cout<<"Masukan Bilangan pembagi = " ;
    cin>>a;
    cout<<"masukan bilangan yang akan dibagi = " ;
    cin>>b;
    if(a==0){
        cout<<"Bilangan pembagi tidak dengan nol"<<endl;}
        else{
            hasil=a/b;
            cout<<"hasilnya adalah : "<<a/b<<endl;}
            return 0;
}
