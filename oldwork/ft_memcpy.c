#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t x;

	if (!dst && !src)
		return (0);
	x = 0;
	while (i < n)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
/*
    a func that cpy n byte from the mem area of src to mem area of dst 
    return -> fuch return dst
    line 12 -> convert void dst and src (that is index x) to unsigned char 
*/