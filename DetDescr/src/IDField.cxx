#include "DetDescr/IDField.h"

namespace detdescr {

IDField::IDField(std::string fieldName, unsigned index, unsigned startBit, unsigned endBit)
    : fieldName(fieldName), index(index), startBit(startBit), endBit(endBit) {

    // Create bit mask for the field.
    bitMask = IDField::createBitMask(startBit, endBit);
}

const std::string& IDField::getFieldName() {
    return fieldName;
}

unsigned IDField::getIndex() {
    return index;
}

unsigned IDField::getStartBit() {
    return startBit;
}

unsigned IDField::getEndBit() {
    return endBit;
}

unsigned IDField::getBitMask() {
    return bitMask;
}

unsigned IDField::createBitMask(unsigned startBit, unsigned endBit) {
   unsigned mask = 0;
   for (int i = startBit; i <= endBit; i++) {
       mask |= 1 << i;
   }
   return mask;
}

}
