#include <stdio.h>
int main()
{
    char c;
    while (c != 'x');
    {
        c = getchar();
        if (c == 'x')
            return 0;
        switch (c) {
        case '\n':break;
        case '\r':
            printf("Newline\n");
	    break;
        default:
            printf("%c",c);
	    break;
        }
    }
    return 0;
}

