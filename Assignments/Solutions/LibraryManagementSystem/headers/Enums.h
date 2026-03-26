#ifndef ENUMS_H
#define ENUMS_H

namespace LibrarySystem {

    enum class BookStatus {
        AVAILABLE,
        ISSUED,
        LOST,
        UNDER_MAINTENANCE
    };

    enum class BookGenre {
        FICTION,
        NON_FICTION,
        SCIENCE_FICTION,
        TECHNICAL,
        MYSTERY,
        PROGRAMMING,
        OTHER
    };

} // namespace LibrarySystem

#endif // ENUMS_H
