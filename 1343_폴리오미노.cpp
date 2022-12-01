#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	int count = 0;
	int result = 1;
	string board = "";
	string poliomino = "";

	cin >> board;


	for (int i = 0; i < board.length(); i++) {
		if (board[i] == '.') {
		
		 if (count == 2) {
			poliomino = poliomino.append("BB.");
			count = 0;
			}
		 else if (count == 0)
			{
				poliomino = poliomino.append(".");
			}
			else {
				result = -1;
				break;
			}
		}
		else if (board[i] == 'X') {
			count++;
			if (count == 4) {
				poliomino = poliomino.append("AAAA");
				count = 0;
			}
		
		}

		//count가 2일때 4일때 
	}
	if (count == 2) {
		poliomino = poliomino.append("BB");
	}
	else if (count == 0) {
		
	}
	else
		result =- 1;


	if (result == -1)
	{
		cout << result;
	}
	else {
		cout << poliomino;
	}

	return 0;
}







