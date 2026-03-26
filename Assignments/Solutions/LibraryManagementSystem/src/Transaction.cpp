#include "../headers/Transaction.h"

namespace LibrarySystem {

int Transaction::nextTransactionId = 1;
const double Transaction::FINE_RATE_PER_DAY = 2.0;

Transaction::Transaction() : transactionId(0), memberId(0), bookId(0), fineAmount(0) {
    issueDate = time(0);
    dueDate = issueDate + (14 * 24 * 60 * 60); // 14 days
    returnDate = 0;
}

Transaction::Transaction(int mId, int bId) 
    : transactionId(nextTransactionId++), memberId(mId), bookId(bId), fineAmount(0) {
    issueDate = time(0);
    dueDate = issueDate + (14 * 24 * 60 * 60); // 14 days
    returnDate = 0;
}

Transaction::Transaction(int tId, int mId, int bId, time_t issue, time_t due, time_t ret, double fine)
    : transactionId(tId), memberId(mId), bookId(bId), issueDate(issue), dueDate(due), returnDate(ret), fineAmount(fine) {
    if (tId >= nextTransactionId) {
        nextTransactionId = tId + 1;
    }
}

void Transaction::returnBook() {
    returnDate = time(0);
    fineAmount = calculateFine();
}

double Transaction::calculateFine() const {
    time_t effectiveReturnDate = (returnDate == 0) ? time(0) : returnDate;
    double secondsOverdue = difftime(effectiveReturnDate, dueDate);
    if (secondsOverdue > 0) {
        int daysOverdue = static_cast<int>(secondsOverdue / (24 * 60 * 60));
        return daysOverdue * FINE_RATE_PER_DAY;
    }
    return 0.0;
}

int Transaction::getTransactionId() const { return transactionId; }
int Transaction::getMemberId() const { return memberId; }
int Transaction::getBookId() const { return bookId; }
time_t Transaction::getIssueDate() const { return issueDate; }
time_t Transaction::getDueDate() const { return dueDate; }
time_t Transaction::getReturnDate() const { return returnDate; }
double Transaction::getFineAmount() const { return fineAmount; }

void Transaction::setNextTransactionId(int id) {
    nextTransactionId = id;
}

int Transaction::getNextTransactionId() {
    return nextTransactionId;
}

}
