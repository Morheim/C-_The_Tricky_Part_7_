//
// Created by aspdr on 12/09/2021.
//

#pragma once

class IRepository {
    virtual void Open(std::string filename) = 0; // �������� �������������� � ����
    virtual void Save() = 0; // �������� ������������ � ����
};