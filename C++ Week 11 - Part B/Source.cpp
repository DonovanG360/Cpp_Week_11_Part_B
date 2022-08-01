// Donovan Green
// CIS 1202
// 7-31-2022
// Template test

#include<iostream>
#include<typeinfo>

using namespace std;

// *******************
//      TEMPLATES
// *******************

template <typename T>
T half(T number) {
	T ans = number / 2;
	/* I figured there had to be a better way than creating another template while explicitly specifying ints
	   so I did a few google searches and found the type info library which allows me to use the typeid.name function
	   to detect whether or not the type that is passed into the template is an int                                   */
	if (*typeid(number).name() == 'i') {
		if (ans * 2 != number) {
			ans++;
		}
	}
	return ans;
}

// ***********************
//      MAIN FUNCTION
// ***********************

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;


	cout << "Thank you for using my program!";
	cout << "\n\n";
	system("pause");
	return 0;
}