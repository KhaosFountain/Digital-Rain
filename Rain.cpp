/*
 ██▓     ▒█████   ██ ▄█▀ ██▓
▓██▒    ▒██▒  ██▒ ██▄█▒ ▓██▒
▒██░    ▒██░  ██▒▓███▄░ ▒██▒
▒██░    ▒██   ██░▓██ █▄ ░██░
░██████▒░ ████▓▒░▒██▒ █▄░██░
░ ▒░▓  ░░ ▒░▒░▒░ ▒ ▒▒ ▓▒░▓
░ ░ ▒  ░  ░ ▒ ▒░ ░ ░▒ ▒░ ▒ ░
  ░ ░   ░ ░ ░ ▒  ░ ░░ ░  ▒ ░
	░  ░    ░ ░  ░  ░    ░


===Lokesh Panti===
===g00383507===
===22/03/23===
*/


#include "Rain.h"

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);



void Rain::Clear(Matrix& matrix) {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			matrix[i][j] = ' ';
		}
	}
}


void Rain::Start() {
	Matrix matrix(HEIGHT, std::vector<char>(WIDTH, ' '));
	srand(time(NULL));

	Clear(matrix);

	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(console, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(console, &cursor_info);


	while (true) {

		int c = rand() % (15 - 10) + 10;
		SetConsoleTextAttribute(console, c);
		Random(matrix);
		Show(matrix);
	}
}

void Rain::Show(Matrix& matrix) {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << "\033[0;0H";
}


void Rain::Random(Matrix& matrix) {
	static std::default_random_engine e;
	static std::uniform_int_distribution <int> u(0, letters.size() - 1);
	static std::uniform_int_distribution <int> r(0, WIDTH - 1);
	int column = r(e);

	for (int i = 0; i < HEIGHT - 1; i++) {
		for (int j = 0; j < WIDTH; j++) {
			matrix[i][j] = matrix[i + 1][j];
		}
		matrix[i][column] = letters[u(e)];
	}
}