#pragma once
#include <GLFW/glfw3.h>
#include <cstdio>
#include <fstream>
#include <print>
using std::print;

int main(int argc, char *argv[])
{
	if (argc <= 0)
	{
		print("No file found");
		return 0;
	}
	FILE *script = std::fopen(argv[0], "r");

	GLFWwindow *window;
}
