#include <iostream>
using namespace std;

//function type
 void print(int num);
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;//declar
	cout<<" enter an interger ";
	cin>>x;
	//func csll
	print(x);
	return 0;
	
}
	
	void print(int num){
		int a=num;
		if (num >0){
			for(a;a>2;a--){
				cout <<a-1;
			}
	
}
				
	else if(num<0){
	
	cout<<num<< "/n is invalid";
	
}
	//return 0;
	}
	

