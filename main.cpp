#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    cout << " Searching for Block #2 " << endl << " found " << bChain.GetBlockString(2) << endl;
    cout << " Searching for Genesis Block " << endl << " found " << bChain.GetBlockString(0) << endl; 
    cout << " search for # 5 .. should fail "  << endl;
    cout << bChain.GetBlockString(4) << endl;
    return 0;
}