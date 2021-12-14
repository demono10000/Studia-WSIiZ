#include <iostream>

using namespace::std;

//zad 1
float poleKola(float r) {
    return 3.14159265358979323846 * r * r;
}
float poleProstokata(float a, float b) {
    return a * b;
}
float poleTrojkata(float a, float h) {
    return (a * h) / 2;
}
float poleSzescianu(float a) {
    return a * a * a;
}
float poleWalca(float r, float h) {
    return poleKola(r) * h;
}