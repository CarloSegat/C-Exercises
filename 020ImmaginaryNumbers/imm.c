#include <stdio.h>
#include <stdlib.h>
/*Complex numbers have two components, a real part and an imaginary part, x + iy,
where x and y are real numbers and i =sqrt(-1) (i.e. i2 = -1).
Given this definition, it is quite easy to derive rules of arithmetic for
complex numbers.

If z1 = x1 + iy1 and z2 = x2 + iy2 then

z1 + z2 = x1 + x2 + i (y1 + y2 )

z1 - z2 = x1 - x2 + i (y1 - y2 )

z1 * z2 = (x1 + iy2 ) (x2 + iy1 ) = x1 x2 - y1 y2 + i(x1 y2 + x2 y1)

*/
struct complex
{
	double real, imaginary;
};

struct complex add_complex(struct complex a, struct complex b){
    struct complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
