#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int rand_res = 1 + rand() % 20;
	int per_res;
	bool stop_game = false;

	do {
		cout << "try to guess the number: ";
		cin >> per_res;
		if (per_res != rand_res) {
			cout << "you didnt guessed the number :("<<endl;

		}
		else {
			cout << "you guessed the number!!!";
			stop_game = true;
		}
	} while (!stop_game);
}
