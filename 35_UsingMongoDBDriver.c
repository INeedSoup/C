#include <stdio.h>

int main()
{
    /*
        MongoDB is not part of the C standard library.

        To use MongoDB from C, install the official MongoDB C Driver
        (libmongoc) and link your program against it. The exact commands
        depend on your operating system and package manager, so this lesson
        keeps the source compile-safe while showing the high-level workflow:

        1. Install libmongoc and libbson.
        2. Include the driver header in your real program:
              #include <mongoc/mongoc.h>
        3. Initialize the driver with mongoc_init().
        4. Create a client using a MongoDB connection string.
        5. Work with databases, collections, and BSON documents.
        6. Clean up resources with mongoc_client_destroy() and mongoc_cleanup().

        This topic is advanced because it requires dependency management,
        linker flags, database setup, and error handling.
    */

    printf("MongoDB in C requires the external MongoDB C Driver (libmongoc).\n");
    printf("Learn the C basics first, then return to this integration lesson.\n");

    return 0;
}
