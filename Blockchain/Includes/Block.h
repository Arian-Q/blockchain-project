#ifndef Block_h
#define Block_h

#include "TransactionData.h"

// Block Class
class Block
{
public:
    // Constructor
    Block(int idx, TransactionData d, size_t prevHash);

    // Get Index
    int getIndex();

    // Get original Hash
    size_t getHash();

    // Get Previous Hash
    size_t getPreviousHash();

    // Transaction Data
    // Would ordinarily bea  private member with a "getter": getData()
    TransactionData data;

    // Validate Hash
    bool isHashValid();


private:
    int index;
    size_t blockHash;
    size_t previousHash;
    size_t generateHash();
};

#endif