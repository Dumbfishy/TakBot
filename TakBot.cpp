/***************************
 *
 *
 *  TakBot.cpp
 *  Kyle Johnston
 *
 *
 * ************************/

#include <iostream>
#include "TakBot.h"



void showBoard();

int main()
{
    
    std::cout << "Hello TakBot!" << std::endl;

    showBoard();

    return 0;

}


void showBoard()
{
    std::cout << "Getting ready to display board" << std::endl;
    #define BOARD_SIZE 5

    std::cout << "  ";

    for (int k = 0; k < BOARD_SIZE; k++) {
        for (int i = 0; i < BOARD_SIZE; i++) {
           std::cout << BOARD_TOP << " ";
        }

        std::cout << std::endl << " ";

        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < BOARD_SIZE + 1; i++) {
               std::cout << BOARD_SIDE << "     ";
            }
            std::cout << std::endl << " ";
        }
        std::cout << " ";
    }

    for (int i = 0; i < BOARD_SIZE; i++) {
       std::cout << BOARD_TOP << " ";
    }

    std::cout << std::endl;

}
