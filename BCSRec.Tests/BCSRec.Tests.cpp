#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	#include "main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(T001_getPerimeter_4and6_20)
		{
			//checks if the function getArea from main.c will give correct result at output
			int Result = 0;
			int length = 6, width = 4;
			int* pWidth, * pLength;
			pWidth = &width;
			pLength = &length;
			Result = getPerimeter(pLength, pWidth);
			Assert::AreEqual(20, Result);
		}
		TEST_METHOD(T002_getArea_4and6_24)
		{
			//checks if the function getArea from main.c will give an exact result at output
			int Result = 0;
			int length = 6, width = 4;
			int* pWidth, * pLength;
			pWidth = &width;
			pLength = &length;
			Result = getArea(pLength, pWidth);
			Assert::AreEqual(24, Result);
		}
		TEST_METHOD(T003_setLength_55)
		{
			//checks if the value 55 will be validated by "if" statement in setLength from main.c
			int input = 55;
			int length = 1; //if the value of -199 will be assigned, test won`t pass
			int* plength;
			plength = &length;
			bool check = false;

			setLength(input, plength);

			if (*plength < 1 && *plength > 99) {
				check = false;
			}
			else if (*plength >= 1 && *plength <= 99) {
				check = true;
			}
			//if setLenght does not wor properly it will assign the value of -199 and this will make boolean check False. 

			Assert::IsTrue(check);
		}
		TEST_METHOD(T004_setLength_100)
		{
			//checks if the value 100 will be validated by "if" statement in setLength from main.c
			int input = 100;
			int length = 1; //if the value of 199 will be assigned it will change and test won`t pass
			int* plength1;
			plength1 = &length;
			bool check = false;

			setLength(input, plength1);

			if (*plength1 < 1 && *plength1> 99) {
				check = false;
			}
			else if (*plength1 >= 1 && *plength1 <= 99) {
				check = true;
			}
			//if setLenght does not wor properly it will assign the value of -199 and this will make boolean check False. 

			Assert::IsTrue(check);
		}
		TEST_METHOD(T005_setLength_0)
		{
			//checks if the value 0 will be validated by "if" statement in setLength from main.c
			int input = 0;
			int length = 1; //if it will assign 0, this will change
			int* plength2;
			plength2 = &length;
			bool check = false;

			setLength(input, plength2);

			if (*plength2 < 1 && *plength2 > 99) {
				check = false;
			}
			else if (*plength2 >= 1 && *plength2 <= 99) {
				check = true;
			}
			//if setLenght does not wor properly it will assign the value of -199 and this will make boolean check False. 

			Assert::IsTrue(check);
		}

		TEST_METHOD(T006_setWidth_45)
		{
			//checks if the value 45 will be validated by "if" statement in setWidth from main.c
			int input = 45;
			int width = 1; //if the value of -199 will be assigned, test won`t pass
			int* pWidth;
			pWidth = &width;
			bool check = false;

			setWidth(input, pWidth);

			if (*pWidth < 1 && *pWidth > 99) {
				check = false;
			}
			else if (*pWidth >= 1 && *pWidth <= 99) {
				check = true;
			}
			//if setLenght does not wor properly it will assign the value of -199 and this will make boolean check False. 

			Assert::IsTrue(check);
		}
		TEST_METHOD(T007_setWidth_100)
		{
			//checks if the value 100 will be validated by "if" statement in setWidth from main.c
			int input = 100;
			int width = 1; //if the value of 199 will be assigned it will change and test won`t pass
			int* pWidth1;
			pWidth1 = &width;
			bool check = false;

			setWidth(input, pWidth1);

			if (*pWidth1 < 1 && *pWidth1 > 99) {
				check = false;
			}
			else if (*pWidth1 >= 1 && *pWidth1 <= 99) {
				check = true;
			}
			//if setLenght does not wor properly it will assign the value of -199 and this will make boolean check False. 

			Assert::IsTrue(check);
		}
		TEST_METHOD(T008_setWidth_0)
		{
			//checks if the value 0 will be validated by "if" statement in setWidth from main.c
			int input = 0;
			int width = 1; //if it will assign 0, this will change
			int* pWidth2;
			pWidth2 = &width;
			bool check = false;

			setWidth(input, pWidth2);

			if (*pWidth2 < 1 && *pWidth2 > 99) {
				check = false;
			}
			else if (*pWidth2 >= 1 && *pWidth2 <= 99) {
				check = true;
			}
			//if setLenght does not wor properly it will assign the value of -199 and this will make boolean check False. 

			Assert::IsTrue(check);
		}
	};
}
