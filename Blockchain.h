#include <cstdint>
#include <list>
#include "Block.h"

using namespace std;


class Blockchain {
    public:
        Blockchain();
        void AddBlock(Block b);
        string GetBlockString(int idx);

    private:
        uint32_t _nDifficulty;
        list<Block> _vChain;

        Block _GetLastBlock() const;
};