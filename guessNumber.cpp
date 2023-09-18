#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int rand_res =1 + rand() % 15;
	int per_res;
	cout << "try to guess the number: ";
	cin >> per_res;
	if (per_res == rand_res) {
		cout << "you guessed the number!!!";
	}
	if  (per_res != rand_res) {
		cout << "you didnt guessed the number :( the number be  "<<rand_res;

	}
}
 