#pragma once
#include "ofMain.h"

class Circle{
public:
    Circle();
    Circle(glm::vec2 pos, float radius,ofColor color);

    void update(glm::vec2 pos, float radius, ofColor color);
    void draw();
    void update(float speed = 1.0); // default arguments
    float getRadius(); // use getter to read private properties

private:
    string smell="sweet";
    glm::vec2 pos;
    float radius=13.6;
    ofColor color;

    float xDir = 1.5;
    float yDir = 1.4;
};


class Car {
public:
    Car();
    Car(ofColor color);

private:
    ofColor color = ofColor(255,0,0);
};
