#include<bits/stdc++.h>
using namespace std;
int board[10][10];
bool isPossible(int n, int row, int column);
void nQueenHelper(int n, int row);
void placeNQueen(int n);
int main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	placeNQueen(4);
	placeNQueen(5);
	placeNQueen(6);
	return 0;*/
	int T;
	cin >> T;
	while (T--)
	{
		int num;
		cin >> num;
		placeNQueen(num);
	}
	return 0;

}
void placeNQueen(int n) {
	memset(board, 0, 10 * 10 * sizeof(int));
	int count = 0;
	nQueenHelper(n, 0);
}
void nQueenHelper(int n, int row) {
	if (row == n) {
		//
		//print
		//return
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << board[i][j] << " ";
			}

			cout << endl;
		}
		cout << endl;
		return;
	}
	for (int j = 0; j < n; j++) {

		if (isPossible(n, row, j)) {
			board[row][j] = 1;
			nQueenHelper(n, row + 1);
			board[row][j] = 0;
		}
	}
	return ;
}
bool isPossible(int n, int row, int col) {
	//upward

	for (int i = row - 1; i >= 0; i--)
		if (board[i][col] == 1)
			return false;

	//left diagonal

	for (int i = row - 1, j = col - 1; i >= 0 && j >= 0 ; --i, --j)
		if (board[i][j] == 1)
			return false;
	//right diagonal

	for (int i = row - 1, j = col + 1; i >= 0 && j < n ; --i, ++j)
		if (board[i][j] == 1)
			return false;

	return  true;
}