#include<iostream> 
using namespace std; 

// Creating a class named 'Shape'
class Shape 
{ 
    protected: 
        int width, height; 

    public: 
        Shape( int w = 0, int h = 0) 
        { 
            width = w; 
            height = h; 
        } 

        // Declaring a pure virtual function, area()
        virtual int area() = 0; 
}; 

// Derived class named 'Rectangle'
class Rectangle: public Shape 
{ 
    public: 
        Rectangle(int w = 0, int h = 0):Shape(w, h) { } 

        // Implementing the pure virtual function 'area'
        int area() 
        { 
            return (width * height); 
        } 
}; 

// Derived class named 'Triangle'
class Triangle: public Shape 
{ 
    public: 
        Triangle(int w = 0, int h = 0):Shape(w, h) { } 

        // Implementing the pure virtual function 'area'
        int area() 
        { 
            return (width * height / 2); 
        } 
}; 

int main(void) 
{ 
    Shape *shape; 
    Rectangle rec(10, 7); 
    Triangle tri(10, 5); 

    shape = &rec; 

    // Calling the area function of rectangle
    cout << "Area of rectangle: " << shape->area() << endl; 

    shape = &tri; 

    // Calling the area function of triangle
    cout << "Area of triangle: " << shape->area() << endl; 

    return 0; 
} 

// Output: 
// Area of rectangle: 70 
// Area of triangle: 25