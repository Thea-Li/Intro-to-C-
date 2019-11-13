
#include <iostream>
#include <string>
using namespace std;
//COMP 142 Programming Project 1, Hailstone
/* Xinwei Li lixi-22@rhodes.edu */
/* Description: Programs runs for Hailstone conjecture and test input with output of all the*/
/*				numbers has been calculated and the number of steps.*/


int main() {
	int num;
	int step;
	
	step = 0;
	cout <<  "Enter a number: " << endl;
	cin >> num;
	
	while (num>1) {
		if (num%2 == 0){
			num = num / 2;
		}
		else if (num % 2 != 0){
			num = num * 3 + 1;
		}
		cout << num << " ";
		step = step + 1;
	}
	
	cout << "Length: " << step << endl;

	return 0;
}
