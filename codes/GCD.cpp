#include <iostream.h>
using namespace std;

void gcd(int a,int b) {
    return b==0?a:gcd(b,a%b);
}
void main(){

  cout<<gcd(10,4)

}
