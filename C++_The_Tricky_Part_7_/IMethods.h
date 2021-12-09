//
// Created by aspdr on 12/09/2021.
//

#pragma once

#include "classes.pb.h"

class IMethods {
    virtual double GetAverageScore(const foo::bar::FullName& name) = 0;
    virtual std::string GetAllInfo(const foo::bar::FullName& name) = 0;
    virtual std::string GetAllInfo() = 0;
};