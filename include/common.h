


#define _COUNT(x)       (sizeof(x)/sizeof(x[0]))


typedef int             n32_t;
typedef unsigned int    un32_t


static inline _round_up(size_t bytes, size_t Align)
{
    return ((bytes+Align-1)&~(Align-1));
}
