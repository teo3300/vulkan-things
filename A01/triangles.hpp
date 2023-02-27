
#define BLACK   0.0,  0.0,  0.0
#define RED     1.0,  0.0,  0.0
#define GREEN   0.0,  1.0,  0.0
#define BLUE    0.0,  0.0,  1.0
#define YELLOW  1.0,  1.0,  0.0
#define CYAN    0.0,  1.0,  1.0
#define MAGENTA 1.0,  0.0,  1.0
#define WHITE   1.0,  1.0,  1.0
#define PURPLE  0.5,  0.0,  0.5
#define ORANGE  1.0,  0.65, 0.0
#define PINK    1.0,  0.75, 0.8
#define GREENY  0.64, 0.85, 0.19

#define N_TRIANGLES 9
#define DATA_SIZE 9


// first implementation

/*
void SetupTriangles(Assignment01 *A) {
/**************
 Function Triangle(float x1, float y1, float x2, float y2, float x3, float y3, float r, float g, float b)

 draws a triangle connecting points (x1,y1)  (x2, y2) and (x3, y3), colored with the (r,g,b) specified color.
 vertex are expressed in Normalized screen coordinates, (i.e. in range [-1,+1]), following the Vulkan convention.
 The red, green and blue (r,g,b) values are in the range [0,1].
 
 Using function Triangle(...) try to draw a children house, similar to the one below.
 
 First remove the two function below (given only as an example), and replace them with your own.
 Since it is a C program, you can use for loops if you think it can be helpful in your drawing.
 The for() command below that draws a sun like shape in exact center of the screen near the top,
 is an example on how you can use it: please remove it, and replace it with your own code.
 It is not necessery to use a for loop if you do not really need it: it has been put here only as
 an example to help students not familiar with C++.
***************/
/*
  float data [][DATA_SIZE] = {

    // back
    {-0.25, 0.1, 0.125, 0.6,   0.125, -0.4, RED},

    // chest
    {0.125, 0.3, 0.375, -0.05, 0.125, -0.4, YELLOW},

    // head
    {0.3, -0.15, 0.3, -0.65,   0.125, -0.4, PURPLE},
    {0.3, -0.15, 0.3, -0.65,   0.475, -0.4, PURPLE},

    // ears
    {0.125, -0.925, 0.3, -0.65,   0.125, -0.4, PINK},
    {0.475, -0.925, 0.3, -0.65,   0.475, -0.4, CYAN},

    // leg
    {-0.25, 0.1, 0.275, 0.85, -0.25, 0.85, CYAN},

    // tail
    {-0.25, 0.85, -0.65, 0.85, -0.45, 0.6, GREENY},
    {-0.85, 0.6, -0.65, 0.85, -0.45, 0.6, GREENY},
  };

  for (int i=0; i<N_TRIANGLES; i++) {
    float* d = data[i];
    A->Triangle(d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8]);
  }
  
  }*/

// Second implementation (common points

/*
#define A -0.85,   0.6
#define B -0.65,   0.85
#define C -0.45,   0.6
#define D -0.25,   0.85
#define E  0.275,  0.85
#define F -0.25,   0.1
#define G  0.125,  0.6
#define H  0.125,  0.3
#define I  0.375, -0.05
#define J  0.125, -0.4
#define K  0.3,   -0.15 
#define L  0.475, -0.4
#define M  0.3,   -0.65
#define N  0.125, -0.925
#define O  0.475, -0.925
  
void SetupTriangles(Assignment01 *As) {

  float data [][DATA_SIZE] = {
    // back
    {F, G, J, RED},
    // chest
    {H, I, J, YELLOW},
    // head
    {J, K, M, PURPLE},
    {L, K, M, PURPLE},
    // ears
    {N, M, J, PINK},
    {L, M, O, CYAN},
    // leg
    {D, E, F, CYAN},
    // tail
    {A, B, C, GREENY},
    {B, C, D, GREENY},
  };

  for (int i=0; i<N_TRIANGLES; i++) {
    float* d = data[i];
    As->Triangle(d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8]);
  }
  
}
*/

#define EAR -0.925
#define HTO -0.66
#define CHE -0.4
#define HBO -0.15
#define SPI  0.1
#define TAL  0.6
#define BOT  0.85

#define RIG  0.485
#define CEN  0.3
#define LEF  0.115
#define LEG -0.26

#define A -0.80,   TAL
#define B -0.625,  BOT
#define C -0.44,   TAL
#define D  LEG,    BOT
#define E  0.25,   BOT
#define F  LEG,    SPI
#define G  LEF,    0.65
#define H  LEF,    0.32
#define I  0.375, -0.05
#define J  LEF,    CHE
#define K  CEN,    HBO
#define L  RIG,    CHE
#define M  CEN,    HTO
#define N  LEF,    EAR
#define O  RIG,    EAR
  
void SetupTriangles(Assignment01 *As) {

  float data [][DATA_SIZE] = {
    // back
    {F, G, J, RED},
    // chest
    {H, I, J, YELLOW},
    // head
    {J, K, M, PURPLE},
    {L, K, M, PURPLE},
    // ears
    {N, M, J, PINK},
    {L, M, O, CYAN},
    // leg
    {D, E, F, CYAN},
    // tail
    {A, B, C, GREENY},
    {B, C, D, GREENY},
  };

  for (int i=0; i<N_TRIANGLES; i++) {
    float* d = data[i];
    As->Triangle(d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8]);
  }
  
}
