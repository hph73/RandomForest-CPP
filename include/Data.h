//
// Created by Aster on 23/06/2018.
//

#ifndef RANDOMFOREST_DATA_H
#define RANDOMFOREST_DATA_H

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

vector<string> splitBySpace(string &sentence);

class Data {
private:
    vector<map<int, double>> features;
    vector<int> target;
    int featureSize = 0;
    bool isTrain;

public:
    Data(bool isTrain = true, int size = 1719692);

    void read(const string &filename);

    double readFeature(int sampleIndex, int featureIndex);

    int readTarget(int sampleIndex);

    int getSampleSize();

    int getFeatureSize();

    vector<int> generateSample(int n);

    vector<int> generateFeatures(int m);
};

void writeDataToCSV(vector<double> &results,
                    Data &data,
                    const string &filename);

#endif //RANDOMFOREST_DATA_H