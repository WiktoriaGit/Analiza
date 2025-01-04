#include "DataPoint.h"

DataPoint::DataPoint(const std::string& dateTime, double autokonsumpcja, double eksport,
    double import_, double pobor, double produkcja)
    : dateTime(dateTime), autokonsumpcja(autokonsumpcja), eksport(eksport),
    import_(import_), pobor(pobor), produkcja(produkcja) {
}

void DataPoint::print() const {
    std::cout << "Data: " << dateTime
        << ", Autokonsumpcja: " << autokonsumpcja
        << ", Eksport: " << eksport
        << ", Import: " << import_
        << ", Pobór: " << pobor
        << ", Produkcja: " << produkcja << std::endl;
}
