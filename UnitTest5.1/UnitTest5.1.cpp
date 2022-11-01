#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.2(1)/lab_5.2(1).cpp"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
    TEST_CLASS(UnitTest51)
    {
    public:

        TEST_METHOD(TestAFunction)
        {
            const double x = 8;
            const int n = 2;
            double temp = 2;
            double& res = temp;
            double expected = 64;

            A(x, n, res);

            Assert::AreEqual(res,expected);
        }

        TEST_METHOD(TestSFunction)
        {
            const double x = 1;
            const double eps = 1;
            double temp = 0;
            double& s = temp;
            int n = 0;
            double expected = 2.5;

            S(x, eps, n, s);

            Assert::AreEqual(s, expected);
        }

        TEST_METHOD(TestBFunction)
        {
            const double x = 8;
            const int n = 2;
            double expected = 64;
            double res = 2;

            res = B(x, n, res);

            Assert::AreEqual(res, expected);
        }

        TEST_METHOD(TestCFunction)
        {
            const double x = 1;
            const double eps = 1;
            double temp = 0;
            double s = temp;
            int n = 0;
            double expected = 2.5;

            s = C(x, eps, n, s);

            Assert::AreEqual(s,expected);
        }
    };
}
