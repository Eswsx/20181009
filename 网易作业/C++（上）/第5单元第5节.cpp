#include<iostream>

using namespace std;


class StackOfIntergers{
	public:
		StackOfIntergers(){
			size = -1;			
		};
		
		bool empty(){
			if(size==-1)return 1;
			else return 0;
		};
		
		int peek(){
			return elements[size];
		};
		
		int push(int value){
			elements[++size] = value;
		};
		
		int pop(){
			int i=0;
			i = elements[size];
			size--;
			return i;
		};
		
		int getSize(){
			return size + 1;
		};
	
	private:
		
		int elements[100];
		
		int size;
		
}; 

int main(){
	StackOfIntergers stack;
	
	for(int i=0;i<10;i++)
		stack.push(i);
		
		while(!stack.empty())
			cout << stack.pop() << " ";
			
			return 0;
	
}
