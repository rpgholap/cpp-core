#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <ctime>

namespace LibrarySystem {

class Transaction {
private:
    static int nextTransactionId;
    static const double FINE_RATE_PER_DAY;

    int transactionId;
    int memberId;
    int bookId;
    time_t issueDate;
    time_t dueDate;
    time_t returnDate;
    double fineAmount;

public:
    Transaction();
    Transaction(int mId, int bId);
    
    // Additional constructor for loading from file
    Transaction(int tId, int mId, int bId, time_t issue, time_t due, time_t ret, double fine);

    void returnBook();
    double calculateFine() const;

    int getTransactionId() const;
    int getMemberId() const;
    int getBookId() const;
    time_t getIssueDate() const;
    time_t getDueDate() const;
    time_t getReturnDate() const;
    double getFineAmount() const;
    
    // Serialization for loading state
    static void setNextTransactionId(int id);
    static int getNextTransactionId();
};

}

#endif // TRANSACTION_H
