#include "Block.h"
#include "sha256.h"
#include <cstdint>
#include <sstream>

using namespace std;

Block::Block(uint32_t nIndexIn, const string& sDataIn, bool isGenesis) : _nIndex(nIndexIn), _sData(sDataIn) {
    _nNonce = -1;
    _tTime = time(nullptr);
    _sHash = isGenesis ? "genesis block hash" : "";
}

string Block::GetHash(){
    return _sHash;
}

void Block::MineBlock(uint32_t nDifficulty){
    string target(nDifficulty, '0');

    do {
        ++ _nNonce;
        _sHash = _CalculateHash();
    } while (_sHash.substr(0, nDifficulty) != target);

    cout << "Block mined: " << _sHash << endl;
}

inline string Block::_CalculateHash () const {
    stringstream ss;
    ss << _nIndex << _tTime << _sData << _nNonce << prevHash;
    return sha256(ss.str());
}