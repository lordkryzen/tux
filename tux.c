/* tux - prints the penguin, coreutils-level shit */
#include <stdio.h>

static const char *const TUX[] = {
    "    .--.",
    "   |o_o |",
    "   |:_/ |",
    "  //   \\ \\",
    " (|     | )",
    "/'\\_   _/`\\",
    "\\___)=(___/",
    NULL
};

int main(void)
{
    for (const char *const *l = TUX; *l; l++)
        puts(*l);
    return 0;
}
