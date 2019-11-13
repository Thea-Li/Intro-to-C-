#include <iostream>
//COMP 142 Programming Project 1, Hailstone
/* Xinwei Li lixi-22@rhodes.edu */
/* Description: Programs runs for Hailstone conjecture and test input range with output of maximum and minimum length and the number archive for.*/
using namespace std;
int main(int argc, char *argv[]) {
	int num;
	int num2;
	int stepMin;
	int stepMax;
	int numMax;
	int numMin;
	int step;
	int numO;

	// set the value for maximum and minimum, so that they can be compared with input number	
	stepMin = 99999;
	stepMax = -1;
	numMax = -1;
	numMin = 999;
	
	cout <<  "Enter the range you want to search: " << endl;
	cin >> num;
	cin >> num2;
	
	// we need to set if-else to test if the user input obly the rules
	if(num2 <= num){
		cout << "Invalid range" << endl;
	}
	else{
		for(int i = num; i <= num2; i++) {
				numO = i;
				step = 0;
				while (numO>1) {
					
					if (numO%2 == 0){
						numO = numO / 2;
					}
					else if (numO % 2 != 0){
						numO = numO * 3 + 1;
					}
	
					step = step + 1;
					
				// Assign the number into new veriable after comparation
				}
				if (step < stepMin) {
					stepMin = step;
					numMin = i;
				}
				else if (step > stepMax) {
					stepMax = step;
					numMax = i;
					
					
				}					
			}
			cout << "Minimum length: " << stepMin<< endl;
			cout << "Achieved by: " << numMin << endl;
			cout << "Maximum length: " << stepMax<< endl;
			cout << "Achieved by: " << numMax << endl;
		
	}
	return 0;

}