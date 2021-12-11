#include <gtest/gtest.h>
#include <math.h>
#include <cstdio>
using namespace std;

struct labtest {
    int a = 0;
    labtest() {

    }
    explicit labtest(const int a)
        : a{ a }
    {
    }
};

int finder() {
    labtest lab;
    double pi = 3.1415926535;
    double a = lab.a;
    double z1;
    z1 = a;
        //(sin(2 * a) + sin(5 * a) - sin(3 * a) / cos(a) - cos(3 * a) + cos(5 * a));
    return z1;
}

TEST(labtest, finder) {
    labtest lab;
    EXPECT_EQ(0, finder());
    EXPECT_TRUE(true);
}

int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}