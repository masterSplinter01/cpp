
#ifndef SEM_24_MY_OSTREAM_H
#define SEM_24_MY_OSTREAM_H
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

class my_ostream{
public:
    virtual void print(int& num) = 0;
    virtual void print(std::string& a) = 0;
    virtual void print(double& num) = 0;
    friend my_ostream& operator<<( my_ostream& out, int num);
    friend my_ostream& operator<<( my_ostream& out,  std::string str );
    friend my_ostream& operator<<( my_ostream& out,  double num );
};

class my_ostream_con
        : public my_ostream{
public:
    void print(int& num) override;
    void print(std::string& str) override;
    void print(double& num) override;
};

class my_ostream_file
        : public my_ostream{
private:
    std::fstream _file;
public:
    explicit my_ostream_file(std::string filename);
    ~my_ostream_file();
    void print(int& num) override;
    void print(std::string& str) override;
    void print(double& num) override;
};



#endif //SEM_24_MY_OSTREAM_H
