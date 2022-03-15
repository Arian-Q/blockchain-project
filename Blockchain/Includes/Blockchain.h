#ifndef Blockchain_h
#define Blockchain_h

#include <vector>

// Blockchain Class
class Blockchain
{
	public:
		// Constructor
		Blockchain();

		// Public Functions
		std::vector<Block> getChain();
		Block* getLatestBlock();
		bool isChainValid();
		void addBlock(TransactionData data);
		void printChain();

	private:
		Block createGenesisBlock();
		std::vector<Block> chain;

};

#endif