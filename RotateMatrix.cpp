// C++ program to rotate a matrix
// by 90 degrees
#include <bits/stdc++.h>
using namespace std;
#define N 4

// An Inplace function to
// rotate a N x N matrix
// by 90 degrees in
// anti-clockwise direction
void rotateMatrix(int mat[][N])
{ // REVERSE every row
	for (int i = 0; i < N; i++)
		reverse(mat[i], mat[i] + N);

	// Performing Transpose
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++)
			swap(mat[i][j], mat[j][i]);
	}
}

// Function to print the matrix
void displayMatrix(int mat[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

/* Driver code */
int main()
{
	int mat[N][N] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };

	// Function call
	rotateMatrix(mat);

	// Print rotated matrix
	displayMatrix(mat);

	return 0;
}
