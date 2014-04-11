//
//  main.cpp
//  demotool
//
//  Created by Kákonyi Roland on 2014.04.11..
//  Copyright (c) 2014 Alloysoft. All rights reserved.
//

#include <iostream>
#include "Counter.h"

int main(int argc, const char *argv[]) {
	Counter counter;
	std::cout << "Hello, World! " << counter.Increment() << "\n";
	std::cout << "Hello, World! " << counter.Increment() << "\n";
	return 0;
}

