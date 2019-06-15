// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
#include "testHarness.h"

using namespace std;

int main()
{

	string xmlPath = "../testing.xml";

	testHarness harness;

	harness.testFunction(xmlPath);

}
