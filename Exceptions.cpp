/**
* @file Exceptions.cpp
 * @brief Implements the custom exception classes.
 *
 * @author Riley Pancake
 * @date 11/23/2026
 * @version 1.0
 */

#include "Exceptions.h"

const char* FileOpenException::what() const noexcept {
    return msg.c_str();
}

const char* ParseException::what() const noexcept {
    return msg.c_str();
}