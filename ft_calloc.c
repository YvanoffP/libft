#include "ibft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tozero;

	tozero = (void*)malloc(nmemb * size);
	if (!tozero)
		return (NULL);
	ft_bzero(tozero, nmemb);
	return (tozero);
}
