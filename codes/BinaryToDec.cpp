#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
	string bin;
	int deci,unit;

void getValue() {
	bin = "1111111";
	deci = 0;
	unit = 0;
}

main() {
	getValue();
	for(int i=bin.length();i>=0;i--){
			if(bin[i]=='1'){
			deci =(1*unit)+deci;
					}
			unit = pow(2,unit);
				}
	cout<<deci<<endl;
}

