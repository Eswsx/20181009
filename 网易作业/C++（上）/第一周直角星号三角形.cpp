#include<iostream>
int main(){
	using std::cout;
	using std::endl;
	for(int i=0;i<5;i++){
		int n=0;
		while(n<i+1){
			cout << "*";
			n++;
		}
		cout << endl;
	}
	std::cin.get(); 
	return 0;
} 
