#include<iostream>
using namespace std;

int main(){
    int Even = 0;
    int Odd = 0;
    int num = 0;
    
    while(true){
        cout << "Enter an integer: ";
        cin >> num;
        if(num == 0){
            break;
        }
        else{
            if(num%2 == 0){
            Even++;
        }
        else{
            Odd++;
        }
        }
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = "<< Odd;
    return 0;
}
