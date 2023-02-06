I built a blochain prototype in C++. 
Run with 

gcc -lstdc++ \                             
    -o CppChain \
    -std=c++11 \
    -stdlib=libc++ \
    -x c++ \
    main.cpp Block.cpp Blockchain.cpp sha256.cpp
./CppChain