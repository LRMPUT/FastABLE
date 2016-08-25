/******************************************************************************/

/**
 * @file    test_OpenABLE.cpp
 * @brief   Program for testing the open version of ABLE
            (Able for Binary-appearance Loop-closure Evaluation)
 * @author  Roberto Arroyo
 * @author  Michal Nowicki
 * @date    March 31, 2016
 */

/******************************************************************************/

// Includes
#include <iostream>
#include "src/OpenABLE.h"

// Namespaces
using namespace std;
using namespace cv;

/******************************************************************************/

// Test program
/**
 * @brief This test program reads image or video sequences and detects loop
 * closures by applying OpenABLE algorithm. Finally, the program saves the
 * similarity matrix scores into a .txt file.
*/
int main( int argc, char *argv[] ){

    if (argc==2){

        OpenABLE openABLE(argv[1]);
        openABLE.compute_OpenABLE();
        openABLE.show_times();
		
    } if (argc==4){

        OpenABLE openABLE(argv[1]);

        std::string videoPaths[2] = {argv[2], argv[3]};
        openABLE.computeForVideo(videoPaths, 200000, 500);
        openABLE.show_times();

    }

    else{
	
        cout << "You must pass the config file path." << endl;
		
    }

}

/******************************************************************************/
