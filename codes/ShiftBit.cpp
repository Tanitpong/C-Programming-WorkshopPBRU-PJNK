#include <iostream.h>
using namespace std;

void testbit(int d) {
  int x = (1<<2);
  int a = (d&x);
  cout << "Test Shift : " << d<<endl;
  cout << "Test bit 3 = 1 is : " << ((d&x)==x);
  (a==1) ? (cout<<"odd"):(cout<<"even");
}
void main(){

  testbit(10);

}
