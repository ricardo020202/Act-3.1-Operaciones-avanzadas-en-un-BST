#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.h"
#include "bst.h"

TEST_CASE("testing isFull", "[isFull]") {
	int adding[] = {50, 25, 75, 12, 40, 60, 80, 5, 18, 30, 45, 55, 80};
  BST<int> b1, b2, b3;

  for(int i = 0; i < 13; i++) {
    if (i < 7) {
      b2.add(adding[i]);
    }
    b3.add(adding[i]);
  }

	REQUIRE(b1.isFull() == false);
	REQUIRE(b2.isFull() == true);
	REQUIRE(b3.isFull() == false);
}
