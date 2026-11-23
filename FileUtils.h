/**
* @file FileUtils.h
 * @brief Declares utility functions for handling file operations.
 *
 * @author Riley Pancake
 * @date 11/23/2026
 * @version 1.0
 */

#ifndef ERRORHANDLING_UTILITIES_H
#define ERRORHANDLING_UTILITIES_H

#pragma once

#include <fstream>
#include <string>

/**
 * @brief Attempts to open a file for reading and retries with an alternative filename on failure.
 * @param file The ifstream object to open.
 * @param initialFilename The first filename to attempt opening.
 */
void openFileForReading(std::ifstream& file, std::string initialFilename);

#endif //ERRORHANDLING_UTILITIES_H