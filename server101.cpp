#include <stdlib.h>
#include <secrets.h>

void debug()
{
    system("/bin.sh");
}

int checkPassword()
{
    char password[64];
    
    gets{password};

    return isValidPassword(password);
    
}

int main(int argc, char **argv)
{
    print("Welcome");

    if (checkPassword())
    {
        debug();
    }
}