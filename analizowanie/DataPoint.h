#ifndef DATAPOINT_H
#define DATAPOINT_H

#include <string>
#include <iostream>

class DataPoint {
public:
    std::string dateTime;
    double autokonsumpcja;
    double eksport;
    double import_;
    double pobor;
    double produkcja;

    DataPoint(const std::string& dateTime, double autokonsumpcja, double eksport, double import_,
        double pobor, double produkcja);

    void print() const;
};

#endif
