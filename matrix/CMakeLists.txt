set(MAT .)

AUX_SOURCE_DIRECTORY(${MAT}/ MATRIX_SRC)
add_library(matrix Matrix.cpp ${MATRIX_SRC})
