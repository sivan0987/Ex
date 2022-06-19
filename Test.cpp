#include <iostream>
#include "doctest.h"
#include "Matrix.hpp"
#include <vector>
using namespace zich;
using namespace std;



std::vector<double> vec1 = {1,1,1,1};
std::vector<double> vec2 = {1,1,1,0,0,0,1,1,1};
std::vector<double> vec3 = {9,9,9,9};
std::vector<double> vec4 = {9,9,9,9};


Matrix mat1{vec1, 2, 2};
Matrix mat2{vec2, 3, 3};
Matrix mat3{vec3, 2, 2};
Matrix mat4{vec4, 2, 2};

TEST_CASE("Good input") {
 
   
        // mat3++;
        // mat4++
        CHECK(mat3 != mat4);

    for(int i=0;i<20;i++){
   CHECK(mat3 != mat4);
    }
  
}

