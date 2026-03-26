#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>
#include <string>

namespace LibrarySystem {

    class LibraryException : public std::exception {
    protected:
        std::string message;
    public:
        LibraryException(const std::string& msg, const char* func, int line) {
            message = "Error in " + std::string(func) + " at line " + std::to_string(line) + ": " + msg;
        }
        virtual const char* what() const noexcept override {
            return message.c_str();
        }
    };

    class BookNotFoundException : public LibraryException {
    public:
        BookNotFoundException(const std::string& msg, const char* func, int line)
            : LibraryException(msg, func, line) {}
    };

    class MemberNotFoundException : public LibraryException {
    public:
        MemberNotFoundException(const std::string& msg, const char* func, int line)
            : LibraryException(msg, func, line) {}
    };

    class BookNotAvailableException : public LibraryException {
    public:
        BookNotAvailableException(const std::string& msg, const char* func, int line)
            : LibraryException(msg, func, line) {}
    };

    class MaxBooksExceededException : public LibraryException {
    public:
        MaxBooksExceededException(const std::string& msg, const char* func, int line)
            : LibraryException(msg, func, line) {}
    };

} // namespace LibrarySystem

#endif // EXCEPTIONS_H
