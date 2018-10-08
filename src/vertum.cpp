#include "./vertum.h"

int main() {
  long long start = utils::currentMillis();

  Blockchain blockchain;
  blockchain.createGenesisBlock();

  blockchain.mineBlock("Noodles");

  std::cout << "took: " << utils::currentMillis() - start << " ms" << std::endl;
  return 0;
}

// gcc compile
// g++ vertum.cpp -lcrypto
