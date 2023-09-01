#include <stdio.h>
#include <stdlib.h>
#include "3dvec.h"

int main(){
    vec * v1 = get_vec_instance(1.0, 1.0, 1.0);
    vec * v2 = get_vec_instance(2.0, 3.0, 4.0);
    vec * v3 = plus(v1, v2);
    show_vec(v3);

    float dot_product = dot(v1, v2);
    printf("%f\n",dot_product);

    vec * cross_product = malloc(sizeof(vec));
    cross(v1, v2, cross_product);
    show_vec(cross_product);

    return 0;
}
