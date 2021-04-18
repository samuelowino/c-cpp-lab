//Class Hierachies with OOP
//draw() and rotate() can be defined only for specific shapes,
//so they are declared as **virtual**
class Shape {
    Point center;
    Color color;
    public:
        Point where(){
            return center;
        }

        void move(Point to){
            center = to;
            draw();
        }

        virtual void draw() = 0;
        virtual void rotate(int angle) = 0;
};

//To define a particular shape, we must say that it is a shape
//and specify its particular properties (including the virtual functions)
class Circle: public Shape {
    int radius;
    public:
        void draw(){
            /** draw circle shape **/
        }

        void rotate(int radius){} //null function
};
