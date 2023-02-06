I built a blochain prototype in C++. 
Run with 

gcc -lstdc++ \                             
    -o CppChain \
    -std=c++11 \
    -stdlib=libc++ \
    -x c++ \
    main.cpp Block.cpp Blockchain.cpp sha256.cpp
./CppChain


Output should be:

Mining block 1...
Block mined: 003a76224d57bcb519ae7ebc9ddc2f0c37d7f0c1710ba006a29c594acac50c05
Mining block 2...
Block mined: 004fae7ac99c1604abb63aaf3b1c7db3622c100b6e45fe66d8c4a2aedd46c3fe
Mining block 3...
Block mined: 00110fcd6ad84200d1751fd64fe2c46e3a69c767617b42eaaebf8b5bc30ab205
 Searching for Block #2 
 found 004fae7ac99c1604abb63aaf3b1c7db3622c100b6e45fe66d8c4a2aedd46c3fe
 Searching for Genesis Block 
 found genesis block hash
 search for # 5 .. should fail 
 this chain is of length (incl Genesis Block) 4 requested block greater than chain size