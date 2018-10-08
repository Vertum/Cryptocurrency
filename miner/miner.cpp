#include "../src/vertum.h"

int main() {
  const char *minerAddress = "0x00000000"; // miner address to reveive mining reward

  Blockchain blockchain;
  blockchain.createGenesisBlock();

  while (true) {
    // start mining
    blockchain.mineBlock(minerAddress);
  }

  return 0;
}
