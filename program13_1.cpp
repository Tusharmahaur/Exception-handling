#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter Values of a and b : ";
    cin>>a>>b;
    int x = a-b;

    //for try the code in these section 
    try{
        if(x != 0){
            cout<<"Rasult(a/x) = "<<a/x<<endl;
        }else{
            //There is the exception 
            throw(x);// throw int object
        }
    }
    catch(int i){// catch the exception 
        cout<<"Exception caught: DIVIDE BY ZERO\n";
    }
    cout<<"END";
    return 0;
}