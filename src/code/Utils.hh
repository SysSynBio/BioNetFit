/*
 * Utils.hh
 *
 *  Created on: Jul 14, 2015
 *      Author: brandon
 */

#ifndef UTILS_HH_
#define UTILS_HH_

#include <iostream>
#include <map>
#include <sstream>

#include <spawn.h>
#include <sys/wait.h>
#include <boost/filesystem.hpp>
#include <sys/stat.h>

#include "FreeParam.hh"

class FreeParam;

void outputError(std::string errorMessage);
std::string convertToAbsPath(std::string relPath);
std::string getFilename(std::string path);
int checkIfFileExists(std::string path);
void split(const std::string& str, std::vector<std::string>& tokens, const std::string& delimiters = " ");
void outputHelp();
bool createParticlePipe(const char * path);
//double pickWeighted(double weightSum, std::multimap<double,double>& weights, int extraWeight, boost::random::mt19937 &generalRand);
bool isFloat(std::string number);
double mutateParamGA(FreeParam* fp, double paramValue);
int runCommand(std::string cmd, std::string &result);
int runCommand(std::string cmd);
std::string toString (unsigned int theNumber);
std::string toString (int theNumber);
std::string toString (float theNumber);
std::string toString (double theNumber);
std::string toString (unsigned long theNumber);

#endif /* UTILS_HH_ */
