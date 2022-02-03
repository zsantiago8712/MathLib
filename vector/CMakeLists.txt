set(VEC .)

AUX_SOURCE_DIRECTORY(${VEC}/ VECTORS_SRC)
add_library(vectors Vector.cpp ${VECTORS_SRC})
