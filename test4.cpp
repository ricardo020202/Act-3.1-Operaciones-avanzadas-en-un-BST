#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.h"
#include "bst.h"

TEST_CASE("testing ancestor", "[ancestor]") {
	int adding[] = {50, 25, 75, 12, 40, 60, 80, 5, 18, 30, 45, 55, 80};
  BST<int> b3;

  for(int i = 0; i < 13; i++) {
    b3.add(adding[i]);
  }

	REQUIRE_THROWS_AS(b3.ancestor(50), NoSuchElement);
	REQUIRE(b3.ancestor(5) == 12);
	REQUIRE(b3.ancestor(40) == 25);
	REQUIRE(b3.ancestor(80) == 75);
	REQUIRE_THROWS_AS(b3.ancestor(100), NoSuchElement);
}
