/**
* @file FileUtils.cpp
 * @brief Implements utility functions for handling file operations.
 *
 * @author Riley Pancake
 * @date 11/23/2026
 * @version 1.0
 */

#include "FileUtils.h"
#include "Exceptions.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void openFileForReading(std::ifstream& file, std::string initialFilename) {
    try {
        file.open(initialFilename);
        if (!file.is_open()) {
            throw FileOpenException("Error: File could not be opened: " + initialFilename);
        }
        cout << "File opened successfully: " << initialFilename << endl;
    }
    catch (const FileOpenException& e) {
        cerr << e.what() << endl;

        // Prompt the user for a backup filename if the first attempt fails
        string alternativeFilename;
        cout << "Enter alternative filename: ";
        cin >> alternativeFilename;
        file.open(alternativeFilename);

        if (!file.is_open()) {
            throw FileOpenException("Error: Failed to open alternative file: " + alternativeFilename);
        }
        cout << "Alternative file opened successfully: " << alternativeFilename << endl;
    }
}