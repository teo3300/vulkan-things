#define GLM_FORCE_RADIANS
#define SQ2 1.4142135623730950488f

void SetupMatrices(Assignment03 *A) {
/**************
 Method Matrix(int N, glm::mat4 M) of object A,
 receives in N the number of the matrix that needs to be set, and the matrix in M
***************/

    glm::mat4 I = glm::mat4(1);
    glm::mat4 M;
	glm::mat4 S, S1;
    glm::mat4 T, T1;
    glm::mat4 R, R1;
	
	// To solve the puzzle: scale 2x proportionally, centered in (2,0,-3)
    T = glm::translate(I, glm::vec3(2, 0, -3));
    T1 = glm::translate(I, glm::vec3(-2, 0, 3));
    S = glm::scale(I, glm::vec3(2));
    M = T * S * T1;
	A->Matrix(1, M); // sets the matrix corresponding to piece 1

	// To solve the puzzle: scale 2x on an axis oriented 45 degrees between the x and z axis and passing through point (1,0,0)
    T = glm::translate(I, glm::vec3(1, 0, 0));
    T1 = glm::translate(I, glm::vec3(-1, 0, 0)); 
    R = glm::rotate(I, glm::radians(45.0f), glm::vec3(0,1,0));
    R1 = glm::rotate(I, glm::radians(45.0f), glm::vec3(0,-1,0));
    S = glm::scale(I, glm::vec3(3, 1, 1));
    M = T * R * S * R1 * T1;
	A->Matrix(2, M); // sets the matrix corresponding to piece 2

	// To solve the puzzle: find it yourself! Hint: compose a rotation around an arbitrary point with a translation
    T = glm::translate(I, glm::vec3(1, 0, 2));
    T1 = glm::translate(I, glm::vec3(-2, 0, -3)); 
    R = glm::rotate(I, glm::radians(45.0f), glm::vec3(0,1,0));
    S = glm::scale(I, glm::vec3(2, 1, 2));
    M = T * R * T1;
	A->Matrix(3, M); // sets the matrix corresponding to piece 3

	// To solve the puzzle: rotate 60 degree around the y axis, centered in (-1,0,-2)
    T = glm::translate(I, glm::vec3(-1, 0, -2));
    T1 = glm::translate(I, glm::vec3(1, 0, 2)); 
    R = glm::rotate(I, glm::radians(60.0f), glm::vec3(0,1,0));
    M = T * R * T1;
	A->Matrix(4, M); // sets the matrix corresponding to piece 4

	// To solve the puzzle: rotate -90 degree around an arbitrary axis passing in (-1,0,0). The x axis can be aligned to this arbitrary direction with a rotation of -45 around the y axis.	
    T = glm::translate(I, glm::vec3(-1, 0, 0));
    T1 = glm::translate(I, glm::vec3(1, 0, 0)); 
    R = glm::rotate(I, glm::radians(90.0f), glm::vec3(-1/SQ2,0,-1/SQ2));
    M = T * R * T1;
	A->Matrix(5, M); // sets the matrix corresponding to piece 5

	// To solve the puzzle: find it yourself! Hint: compose a non-proportional scaling that halves the object along one of the main axes, centered in an arbitrary point, with a translation
    T = glm::translate(I, glm::vec3(-1, 0, 3));
    T1 = glm::translate(I, glm::vec3(3, 0, -3)); 
    S = glm::scale(I, glm::vec3(1.0f/2, 1, 1));
    M = T * S * T1;
	A->Matrix(6, M); // sets the matrix corresponding to piece 6

}
