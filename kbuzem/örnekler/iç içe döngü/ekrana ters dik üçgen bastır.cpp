#include <iostream>
using namespace std;
//ekrana ters dik ��gen bast�r
int main(int argc, char** argv) {
	
		cout<<"	Boyutu giriniz"<<endl;
	int boyut;
	cin>>boyut;
		for(int i =1;i<=boyut;i++){
			for(int k =1;k<i;k++){
			cout<<" ";	
			}
		for(int j =1;j<=boyut-i+1;j++){
		    cout<<"*";
}
            cout<<endl;
}

	
	
	
	return 0;
}
