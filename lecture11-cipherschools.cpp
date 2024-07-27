#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){  //use the break statement at i=7.
		if(i==7){
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		if(i==5){
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
