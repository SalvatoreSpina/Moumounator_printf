#include "libft.h"
#include "wrappers.h"

#include <stdio.h>

#define TESTED_INT 10

int     main(void)
{
    printf("%d\n", ft_printf("%u\n", TESTED_INT));;
}