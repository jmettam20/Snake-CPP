#include <iostream>
using namespace std;

bool gameOver; //identifies if game has ended or not
const int width = 20;
const int height = 20;
int headX, headY, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;


void Setup() {
	gameOver = false;
	dir = STOP;
	headX = width / 2;
	headY = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void Draw() {
	//DRAW WALLS INITIALLY
	system("cls");
	for (int i = 0; i < width; i++) {
		cout << "#";
		cout << endl;
	}

	//DRAW MAP
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
			{
				cout << "#"; //DRAW LEFT WALL
			}
			else
			{
				cout << " "; //DRAW BLANK SPACE 
			}
			if (j == width - 1)
			{
				cout << "#"; //DRAW RIGHT WALL
			}
		}

	}

	//REDRAW WALLS
	for (int i = 0; i < width; i++) {
		cout << "#";
		cout << endl;
	}
}

void Input() {

}

void Logic() {

}

int main() {

	Setup();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
	}

	return 0;
}