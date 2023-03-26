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



#include<iostream>
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>
#include <vector>
#include<Windows.h>
#include<random>

#ifndef RAIN_H
#define RAIN_H

class Rain {

    typedef std::vector<std::vector<char>> Matrix;
public:
   // Rain();
    void Start();
    void Clear(Matrix& matrix);
    void Show(Matrix& matrix);
    void Random(Matrix& matrix);
private:

    // array of letters to be printed and are chosen at random in the 'Random()' function
    std::vector<char> letters{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                                'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '`',
                                'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', '~',
                                's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_',
                                '-', '+', '=', '{', '}', '[', ']', '\\', ':', ';', '\"', '\'', '<', '>', ',', '.', '?', '/', };


    // sets the size of the matrix....to the demensions i have chosen here
    const int WIDTH = 180;
    const int HEIGHT = 45;



};


#endif