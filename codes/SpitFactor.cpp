#include <iostream>
using namespace std;
int main(){
    int a, x = 2;
    cin>>a;
	while(a != 1){
        while(a % x == 0){
            cout<<x<<endl;
            a = a / x;
        }
        x++;
    }
    return 0;
}
