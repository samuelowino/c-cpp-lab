//Object Oriented Programming; Problem with Concrete Types
enum Kind{ CIRCLE, TRIANGLE, SQUARE};

class Shape {
    Kind kind;
    Point center;
    Color color;

    public:
        void draw();
        void rotate(int revolutions);
}

//Definition of draw() function
//This is a mess bcause function draw() has to know about all kinds of shapes
//consider file sample7.cpp
void Shape::draw(){
    switch(kind){
        case CIRCLE:
            /** draw circle **/
            break;
        case TRIANGLE:
            /** draw triangle **/
            break;
        case SQUARE:
            /** draw square **/
            break;
        default:
            /** unknown shape **/
            break;
    }
}
