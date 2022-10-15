#include <iostream>
using namespace std;
// function type
void largest (int x,int y,int z);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int b;
	int c;
	
	cout<<"\n Enter first interger";
	cin>>b;
	cout <<"\n Enter second interger";
	cin>>b;
	
	cout <<"\n Enter third interger";
	cin>>c;
	
	//function caall
	largest(a,b,c);
	return 0;
}

//fuction definatipon
void largest (int x,int y, int z){

 	if((x>y)&&(x>z)){
 		cout<< x <<"is the largest";
 	}
 	else if ((y>x) && (y>z)){
 		cout<< y <<"is the largest";
	 }	
 
 	else{
 	 	cout<< z <<"is the largest";
 }
 	
	
 }


