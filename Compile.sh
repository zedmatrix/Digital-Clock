# Compile C++ to x

echo "Compiling $1 ..."
gcc $1.cpp -o $1.x -lstdc++
