#include <iostream>

#include "ConstructorTests.h"
#include "ProvidedTests.h"
#include "MoveCopyOperatorTests.h"
#include "MattTests.h"
#include "NormCacheTest.h"
#include "AccessTests.h"
#include "CameronTests.h"
#include "CraigTests.h"

int main(int argc, char *argv[]) {
    std::cout << "Starting test suite.\n";

    std::cout << "Running provided tests.\n";
    provided_tests();
    std::cout << "Passed provided tests.\n";

    std::cout << "Running constructor tests.\n";
    constructor_tests();
    std::cout << "Passed constructor tests.\n";

    std::cout << "Running move and copy operator tests.\n";
    movecopyoperator_tests();
    std::cout << "Passed move and copy operator tests.\n";

    std::cout << "Testing the norm is cached correctly.\n";
    norm_cache_tests();
    std::cout << "Passed norm caching test.\n";

    std::cout << "running matt's tests\n";
    matt_tests();
    std::cout << "passed matt's tests\n";

    std::cout << "Running Craig's tests\n";
    craig_tests();
    std::cout << "Passed Craig's tests\n";

    std::cout << "Running access tests.\n";
    access_tests();
    std::cout << "Passed access tests.\n";

    std::cout << "Running Cameron's tests.\n";
    cameron_tests();
    std::cout << "Passed Cameron's tests.\n";

    std::cout << "All tests passed.\n";

    return 0;
}
