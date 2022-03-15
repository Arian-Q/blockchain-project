#ifndef TransactionData_h
#define TransactionData_h

struct TransactionData
{
	double amount;
	std::string senderKey;
	std::string receiverKey;
	time_t timeStamp;

	TransactionData(){};

	TransactionData(double amt, std::string sender, std::string receiver, time_t time)
	{
		amount = amt;
		senderKey = sender;
		receiverKey = receiver;
		timeStamp = time;
	}
};

#endif