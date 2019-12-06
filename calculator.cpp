#include<iostream>
using namespace std;

int main()
{
	char ch;
	float n1, n2;


	cin >> ch;


	cin >> n1 >> n2;


	switch (ch) {


		case '+':
			cout << n1 + n2;
			break;


		case '-':
			cout << n1 - n2;
			break;


		case '*':
			cout << n1 * n2;
			break;


		case '/':
			cout << n1 / n2;
			break;


		default:
			cout << "Error! operator is not correct";
			break;
	}
	return 0;
}
