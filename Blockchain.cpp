#include "Blockchain.h"
#include <stdexcept>

Blockchain::Blockchain() {
    Block gen(0, "Genesis Block", true);
    _vChain.push_back(gen);
    _nDifficulty = 2;
}

void Blockchain::AddBlock(Block b){
    b.prevHash = _GetLastBlock().GetHash();
    b.MineBlock(_nDifficulty);
    _vChain.emplace_back(b);
}

Block Blockchain::_GetLastBlock () const {
    return _vChain.back();
}

string Blockchain::GetBlockString(int idx){
    list<Block>::iterator it = _vChain.begin();
    while(idx > 0){
        ++it;
        --idx;
        if(it == _vChain.end()){
            return " this chain is of length (incl Genesis Block) " + to_string(_vChain.size()) + " requested block greater than chain size ";
        }
    }
    return it -> GetHash();
}