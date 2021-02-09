#ifndef CS202LAB7_VECTOR3F_H
#define CS202LAB7_VECTOR3F_H

class Vector3f {
public:
    Vector3f();
    ~Vector3f();
    void setFloat(float newX, float newY, float newZ);
    float x, y, z;
};

#endif //CS202LAB7_VECTOR3F_H