#include "Vector3f.h"

Vector3f::Vector3f(){
    x=0;
    y=0;
    z=0;
}

Vector3f::~Vector3f(){
};

void Vector3f::setFloat(float newX, float newY, float newZ){
    x = newX;
    y = newY;
    z = newZ;
}