/**
* @file Exceptions.h
 * @brief Declares custom exception classes for the shape parser.
 *
 * @author Riley Pancake
 * @date 11/23/2026
 * @version 1.0
 */

#pragma once

#include <exception>
#include <string>

/**
 * @class FileOpenException
 * @brief Exception thrown when a file fails to open.
 */
class FileOpenException : public std::exception {
private:
    std::string msg;

public:
    FileOpenException(const std::string& message) : msg(message) {}
    virtual const char* what() const noexcept override;
};

/**
 * @class ParseException
 * @brief Exception thrown when an unknown shape or malformed line is encountered.
 */
class ParseException : public std::exception {
private:
    std::string msg;

public:
    ParseException(const std::string& message) : msg(message) {}
    virtual const char* what() const noexcept override;
};