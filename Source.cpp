#include <iostream>
using namespace std;
int main() {
	float BMI;
	float weight;
	float height=60;
	float underweight;
	float normal;
	float overweight;
	float obese;
	cout << "\nEnter height (in inches):";
	cin >> weight;
	cout << "\nEnter weight (in pounds):";
	cin >> weight;
	BMI = (703*weight)/(height*height);
	//cout << "\nBMI is:" << BMI;
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
			cout << "\nObese"; }
	return 0;
}