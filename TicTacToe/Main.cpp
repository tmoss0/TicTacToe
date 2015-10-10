#include <iostream>
using namespace std;


char gridArray[3][3];


int checkWin()
{
	/*for (int i = 0; i += 3; i < 9)
	{
		if (gridArray[i] == gridArray[i += 1] && gridArray[i += 1] == gridArray[i += 2])
			return 1;
	}

	for (int i = 0; i++; i < 3)
	{
		if (gridArray[i] == gridArray[i += 3] && gridArray[i += 3] == gridArray[i += 6])
			return 1;
	}*/

	//Top horizontal row
	if (gridArray[0] == gridArray[1] && gridArray[1] == gridArray[2])
		return 1;
	// Middle horizontal row
	else if (gridArray[3] == gridArray[4] && gridArray[4] == gridArray[5])
		return 1;
	// Bottom horizontal row
	else if (gridArray[6] == gridArray[7] && gridArray[7] == gridArray[8])
		return 1;

	//Left vertical row
	else if (gridArray[0] == gridArray[3] && gridArray[3] == gridArray[6])
		return 1;
	// Middle veritcal row
	else if (gridArray[1] == gridArray[4] && gridArray[4] == gridArray[7])
		return 1;
	// Right vertical row
	else if (gridArray[2] == gridArray[5] && gridArray[5] == gridArray[8])
		return 1;

	// Left to right diagonal
	else if (gridArray[0] == gridArray[4] && gridArray[4] == gridArray[8])
		return 1;
	// Right to left diagonal
	else if (gridArray[2] == gridArray[4] && gridArray[4] == gridArray[6])
	
	

	return 0;
}

void drawGrid()
{


}

int main()
{


	return 0;
}