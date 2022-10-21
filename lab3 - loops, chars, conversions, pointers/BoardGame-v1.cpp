#include <iostream>

using namespace std;

const int PLAYERS_QUANTITY = 4;

int main()
{
	int boardSize;
	int previousDiceRolled[PLAYERS_QUANTITY] = { 0 };
	int playersScore[PLAYERS_QUANTITY] = { 0 };
	bool canPlayerStart[PLAYERS_QUANTITY] = { 0 };
	bool isGameFinished = false;
	int i = 0;

	cin >> boardSize;

	while (!isGameFinished) {
		char command;
		cin >> command;

		if (command == 'M') {
			int diceRolled;
			cin >> diceRolled;

			if (canPlayerStart[i]) {
				playersScore[i] += diceRolled;

				if (playersScore[i] >= boardSize) {
					isGameFinished = true;
					cout << "END OF GAME\n";
					cout << i + 1 << ". player won the game\n\n";
					break;
				}
			}
			else if (previousDiceRolled[i] == 1 and diceRolled == 6) {
				canPlayerStart[i] = true;
			}

			previousDiceRolled[i] = diceRolled;
		}
		else if (command == 'P') {
			cout << "CURRENT GAME STATE:\n";

			for (int j = 0; j < PLAYERS_QUANTITY; j++) {
				cout << j << ": " << playersScore[j] << " " << canPlayerStart[j] << "\n";
			}
			cout << "\n";
		}

		if (i == PLAYERS_QUANTITY - 1) {
			i = 0;
		}
		else if (command != 'P') {
			i++;
		}
	}
	
	return 0;
}
