#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if(argc == 1)
    {
        system("system76-power graphics");
        return 0;
    }
    char c = argv[1][0];

    switch (c)
    {
    case 'i':
        system("system76-power graphics integrated");
        system("reboot");
        break;
    case 'n':
        system("system76-power graphics nvidia");
        system("reboot");
        break;
    default:
        printf("Wrong argument. Use 'i' for Integrated and 'n' for Nvidia.");
        break;
    }
    return 0;
}