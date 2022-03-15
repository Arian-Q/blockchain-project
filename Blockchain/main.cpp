#include <iostream>
#include <ctime>
#include <vector>

#include "TransactionData.h"
#include "Block.h"
#include "Blockchain.h"

using namespace std;

int main()
{
	// Start Blockchain
	Blockchain awesomeCoin;

	// Data for first block
	time_t dataOneTime;
	TransactionData dataOne(1.5, "Joe", "Sally", time(&dataOneTime));
	awesomeCoin.addBlock(dataOne);

	time_t dataTwoTime;
	TransactionData dataTwo(0.2233, "Martha", "Fred", time(&dataTwoTime));
	awesomeCoin.addBlock(dataTwo);

	// Let's see what's in the awesomeCoin blockchain!
	awesomeCoin.printChain();
	
	// Is it valid?
	printf("\nIs chain still valid %d\n", awesomeCoin.isChainValid());

	// Someone's getting sneaky
	Block* hackBlock = awesomeCoin.getLatestBlock();
	hackBlock->data.amount = 10000; // Oh yeah!
	hackBlock->data.receiverKey = "Jon"; // mwahahahaha!

	// Let's look at data
	awesomeCoin.printChain();

	// Awww! Why is it not valid?
	printf("\nIs chain still valid? %d\n", awesomeCoin.isChainValid());

	return 0;
}