#include<iostream>
using namespace std;

//Write the function printO() here

void printO(int row_amount, int column_amount){
	if(row_amount <= 0 || column_amount <= 0){
		cout << "Invalid input";
		return;
	}
	for(int i = 0; i < row_amount; i++){
		for(int j = 0; j < column_amount; j++){
			cout << "O";
		}
		cout << "\n";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
