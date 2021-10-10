#include <iostream>
using namespace std;
int main() {
	float BMI;
	float weight;
	float height;
	cout << "\nEnter height (in inches):";
	cin >> height;
	cout << "\nEnter weight (in pounds):";
	cin >> weight;
	BMI = (703*weight)/(height*height);
	if (BMI <= 18.5) {
		cout << "\nUnderweight";
	}
	if (BMI >= 18.5 && BMI <= 24.9){
		cout << "\nNormal";
	}
	if (BMI >= 25.0 && BMI <= 29.9){
		cout << "\nOverweight";
	}
	if (BMI >= 30){
		cout << "\nObese"; 
	}
	return 0;
}