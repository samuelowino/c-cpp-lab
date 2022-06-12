#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>
#include <iostream>

int main(){
    initializeGlfw();    
}

void initializeGlfw(){
    if (!glfwInit()){
        std::cout<< "GLFW initialization failed!";
    }

    glfwSetErrorCallback(error_callback);
}

void error_callback(int error, const char* description){
    fprintf(stderr, "glfw error code code %d, message %s", error, description);
}

void terminateglfw(){
    glfwTerminate();
}