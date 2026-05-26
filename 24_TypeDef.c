#include <stdio.h>

typedef int Number;

typedef char String[50]; // 50 space gets alocated here

typedef char Initial[3]; // size is 3 as initials are two characters and at end you need null terminator

// typedef char *String; // now here we dont have to specify the size here
// its a reserved keyword that gives an existing datatype a "nickname", helps simplyfy types and improves code readability


int main()
{
    // typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d\n", z);

    String name = "Bro Code";

    printf("%s\n", name);

    Initial user1 = "AP";
    
    printf("%s", user1);


    return 0;
}