#include "./vertum.h"

int main() {
  long long start = utils::currentMillis();

  Blockchain blockchain;
  blockchain.createGenesisBlock();

  blockchain.sendTransaction("senderPrivate", "senderPublic", 5);
  blockchain.minePendingTransactions("Noodles");

  std::cout << "took: " << utils::currentMillis() - start << " ms" << std::endl;
  return 0;
}

// gcc compile
// g++ vertum.cpp -lcrypto
