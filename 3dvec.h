#include<stdio.h>
#include<stdlib.h>

typedef struct vec {
    float x;
    float y;
    float z;
} vec;

vec * get_vec_instance(float x, float y, float z){
    vec * v = (vec*) malloc(sizeof(vec));
    v->x = x;
    v->y = y;
    v->z = z;
    return v;
}

void scale(vec * v, int factor){
    v->x *= factor;
    v->y *= factor;
    v->z *= factor;
}

float dot(vec *v1, vec *v2){
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

void cross(vec *v1, vec *v2, vec * res){
    res->x = v1->y * v2->z - v2-> y * v1->z;
    res->y = -(v1->x * v2->z - v2->x * v1->z);
    res->z = v1->x * v2->y - v1->y * v2->x;
}

void show_vec(vec * v){
    printf("<%f, %f, %f>\n", v->x, v->y, v->z);
}