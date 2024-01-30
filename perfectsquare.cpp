#include <iostream>
using namespace std;
int main() {
 
    bool check =false;
    int square;
    int i =1;
    int ones;// ones place
    int tens;//tens place
    while(check=false){
        square = i * i;
        ones = square % 10;
        tens = (square/10)%10;
        if(ons%2==1 && tens%2==1){
            cout<< square;
            break;
        }
        i++
    }
   
    return 0;
}