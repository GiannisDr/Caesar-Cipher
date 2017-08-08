#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


void game() {
	string answer2;

	int random_number = 0, answer_player = 0, computer = 0, player = 0;


	cout << "so let's play,if you hit 1 it's rock,if you hit 2 you choose scissors else if you hit 3 you take paper." << endl;
	do {
		cout << "1 = Rock." << endl;
		cout << "2 = Scissors." << endl;
		cout << "3 = Paper." << endl;

		cin >> answer_player;
		srand(time(0));
		random_number = rand() % 3 + 1;
		/*		if (random_number < 1 || random_number > 1) {
		random_number = 1;
		}

		if (random_number < 2 || random_number > 2) {
		random_number = 2;
		}

		if (random_number < 3 || random_number > 3) {
		random_number = 3;
		} */

		if (answer_player == random_number) {
			cout << "We have the same so..tie." << endl;


		}
		if (answer_player == 1 && random_number == 2) {
			cout << "You won,i have scissors." << endl;
			player = player + 1;
		}
		if (answer_player == 2 && random_number == 1) {
			cout << "Sorry i won, i have rock." << endl;
			computer = computer + 1;
		}
		if (answer_player == 2 && random_number == 3) {
			cout << "You won,i have paper." << endl;
			player = player + 1;
		}
		if (answer_player == 3 && random_number == 2) {
			cout << "OO sorry but i won, i have scissors." << endl;
			computer = computer + 1;
		}
		if (answer_player == 1 && random_number == 3) {
			cout << "Sorry my friend you lose,i have paper." << endl;
			computer = computer + 1;
		}
		if (answer_player == 3 && random_number == 1) {
			cout << "I lose..i have rock." << endl;
			player = player + 1;
		}
		cout << "Thank you for playing with me,do you want to play again?if you want press okey,else write whatever do you want." << endl;
		cout << "The scor is player " << player << " - computer " << computer << "." << endl;
		cin >> answer2;

	} while (answer2 == "okey");
}

int main()
{
	string answer;

	cout << "Hello my friend!" << endl;
	cin >> answer;
	cout << "Do you want to play Rock-paper-scissors with me?" << endl;
	cin >> answer;
	if (answer == "yes") {
		game();
	}
	else {
		cout << "thanks for click me. " << endl;
		cin >> answer;
	}

	return 0;
}


