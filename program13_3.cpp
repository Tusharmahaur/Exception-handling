#include <iostream>
using namespace std;

void test(int x){
    try{
        if(x ==1)throw x;  // int
        else 
            if(x == 0)throw 'x'; // char
        else
            if(x == -1) throw 1.0; //double
        cout<<"End of try-block \n";
    }

    catch(char c){
        cout<<"Caught a character \n";
    }
    catch(int m){
        cout<<"Caught an integer \n";
    }
    catch(double d){
        cout<<"Caught a double \n";
    }
    cout<<"End of try-catch system"<<endl<<endl;
}

int main(){
    cout<<"Testing Multiple Catches"<<endl;
    cout<<"x == 1"<<endl;
    test(1);
    cout<<"x == 0 "<<endl;
    test(0);
    cout<<"x == -1 "<<endl;
    test(-1);
    cout<<"x == 2"<<endl;
    test(2);
    return 0;
}